
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ena_rss {int tbl_log_size; int * rss_ind_tbl; int rss_ind_tbl_dma_addr; int host_rss_ind_tbl; } ;
struct ena_com_dev {int dmadev; struct ena_rss rss; } ;
struct ena_admin_rss_ind_table_entry {int dummy; } ;
struct TYPE_3__ {int min_size; int max_size; } ;
struct TYPE_4__ {TYPE_1__ ind_table; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t,int ) ;
 int * FUNC_1 (int ,size_t,int *,int ) ;
 int FUNC_2 (int ,size_t,int *,int ) ;
 int FUNC_3 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ) ;
 int FUNC_4 (char*,int,int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ena_com_dev *VAR_4,
        u16 VAR_5)
{
 struct ena_rss *VAR_6 = &VAR_4->rss;
 struct ena_admin_get_feat_resp VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, &VAR_7,
      VAR_1, 0);
 if (FUNC_5(VAR_9))
  return VAR_9;

 if ((VAR_7.u.ind_table.min_size > VAR_5) ||
     (VAR_7.u.ind_table.max_size < VAR_5)) {
  FUNC_4("indirect table size doesn't fit. requested size: %d while min is:%d and max %d\n",
         1 << VAR_5, 1 << VAR_7.u.ind_table.min_size,
         1 << VAR_7.u.ind_table.max_size);
  return -VAR_0;
 }

 VAR_8 = (1ULL << VAR_5) *
  sizeof(struct ena_admin_rss_ind_table_entry);

 VAR_6->rss_ind_tbl =
  FUNC_1(VAR_4->dmadev, VAR_8,
       &VAR_6->rss_ind_tbl_dma_addr, VAR_3);
 if (FUNC_5(!VAR_6->rss_ind_tbl))
  goto mem_err1;

 VAR_8 = (1ULL << VAR_5) * sizeof(u16);
 VAR_6->host_rss_ind_tbl =
  FUNC_0(VAR_4->dmadev, VAR_8, VAR_3);
 if (FUNC_5(!VAR_6->host_rss_ind_tbl))
  goto mem_err2;

 VAR_6->tbl_log_size = VAR_5;

 return 0;

mem_err2:
 VAR_8 = (1ULL << VAR_5) *
  sizeof(struct ena_admin_rss_ind_table_entry);

 FUNC_2(VAR_4->dmadev, VAR_8, VAR_6->rss_ind_tbl,
     VAR_6->rss_ind_tbl_dma_addr);
 VAR_6->rss_ind_tbl = ((void*)0);
mem_err1:
 VAR_6->tbl_log_size = 0;
 return -VAR_2;
}
