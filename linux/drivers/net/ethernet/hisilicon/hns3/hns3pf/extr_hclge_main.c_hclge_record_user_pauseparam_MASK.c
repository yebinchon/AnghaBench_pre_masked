
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int fc_mode; } ;
struct hclge_dev {int fc_mode_last_time; TYPE_1__ tm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct hclge_dev *VAR_4,
      u32 VAR_5, u32 VAR_6)
{
 if (VAR_5 && VAR_6)
  VAR_4->fc_mode_last_time = VAR_0;
 else if (VAR_5 && !VAR_6)
  VAR_4->fc_mode_last_time = VAR_2;
 else if (!VAR_5 && VAR_6)
  VAR_4->fc_mode_last_time = VAR_3;
 else
  VAR_4->fc_mode_last_time = VAR_1;

 VAR_4->tm_info.fc_mode = VAR_4->fc_mode_last_time;
}
