
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct ena_rss {unsigned long long tbl_log_size; unsigned long long* host_rss_ind_tbl; int rss_ind_tbl_dma_addr; } ;
struct ena_com_dev {struct ena_rss rss; } ;
struct ena_admin_rss_ind_table_entry {int dummy; } ;
struct ena_admin_get_feat_resp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ,unsigned long long,int ) ;
 int FUNC_1 (struct ena_com_dev*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ena_com_dev *VAR_1, u32 *VAR_2)
{
 struct ena_rss *VAR_3 = &VAR_1->rss;
 struct ena_admin_get_feat_resp VAR_4;
 u32 VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = (1ULL << VAR_3->tbl_log_size) *
  sizeof(struct ena_admin_rss_ind_table_entry);

 VAR_7 = FUNC_0(VAR_1, &VAR_4,
        VAR_0,
        VAR_3->rss_ind_tbl_dma_addr,
        VAR_5, 0);
 if (FUNC_2(VAR_7))
  return VAR_7;

 if (!VAR_2)
  return 0;

 VAR_7 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_7))
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < (1 << VAR_3->tbl_log_size); VAR_6++)
  VAR_2[VAR_6] = VAR_3->host_rss_ind_tbl[VAR_6];

 return 0;
}
