
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pg; int fc_mode; } ;
struct hclge_dev {scalar_t__ tx_sch_mode; TYPE_1__ tm_info; int fc_mode_last_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hclge_dev*,int) ;
 int FUNC_1 (struct hclge_dev*) ;

int FUNC_2(struct hclge_dev *VAR_3)
{

 VAR_3->tm_info.fc_mode = VAR_1;
 VAR_3->fc_mode_last_time = VAR_3->tm_info.fc_mode;

 if (VAR_3->tx_sch_mode != VAR_2 &&
     VAR_3->tm_info.num_pg != 1)
  return -VAR_0;

 FUNC_1(VAR_3);

 return FUNC_0(VAR_3, 1);
}
