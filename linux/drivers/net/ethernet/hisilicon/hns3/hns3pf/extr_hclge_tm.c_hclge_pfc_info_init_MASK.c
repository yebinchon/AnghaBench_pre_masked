
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fc_mode; } ;
struct hclge_dev {int flag; scalar_t__ fc_mode_last_time; TYPE_2__ tm_info; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_2)
{
 if (!(VAR_2->flag & VAR_1)) {
  if (VAR_2->fc_mode_last_time == VAR_0)
   FUNC_0(&VAR_2->pdev->dev,
     "DCB is disable, but last mode is FC_PFC\n");

  VAR_2->tm_info.fc_mode = VAR_2->fc_mode_last_time;
 } else if (VAR_2->tm_info.fc_mode != VAR_0) {




  VAR_2->fc_mode_last_time = VAR_2->tm_info.fc_mode;
  VAR_2->tm_info.fc_mode = VAR_0;
 }
}
