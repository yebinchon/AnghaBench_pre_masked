
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_rss {int tbl_log_size; int* host_rss_ind_tbl; } ;
struct ena_com_dev {struct ena_rss rss; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct ena_com_dev *VAR_2,
          u16 VAR_3, u16 VAR_4)
{
 struct ena_rss *VAR_5 = &VAR_2->rss;

 if (FUNC_0(VAR_3 >= (1 << VAR_5->tbl_log_size)))
  return -VAR_0;

 if (FUNC_0((VAR_4 > VAR_1)))
  return -VAR_0;

 VAR_5->host_rss_ind_tbl[VAR_3] = VAR_4;

 return 0;
}
