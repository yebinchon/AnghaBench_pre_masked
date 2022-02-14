
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tc; scalar_t__ pfc_en; } ;
struct hclge_dev {int flag; TYPE_1__ tm_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_dev*) ;

void FUNC_1(struct hclge_dev *VAR_1)
{



 if (VAR_1->tm_info.num_tc > 1 || VAR_1->tm_info.pfc_en)
  VAR_1->flag |= VAR_0;
 else
  VAR_1->flag &= ~VAR_0;

 FUNC_0(VAR_1);
}
