
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fc_mode; } ;
struct hclge_dev {TYPE_1__ tm_info; } ;







 int FUNC_0 (struct hclge_dev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_0)
{
 bool VAR_1, VAR_2;

 switch (VAR_0->tm_info.fc_mode) {
 case 131:
  VAR_1 = 0;
  VAR_2 = 0;
  break;
 case 129:
  VAR_1 = 0;
  VAR_2 = 1;
  break;
 case 128:
  VAR_1 = 1;
  VAR_2 = 0;
  break;
 case 132:
  VAR_1 = 1;
  VAR_2 = 1;
  break;
 case 130:
  VAR_1 = 0;
  VAR_2 = 0;
  break;
 default:
  VAR_1 = 1;
  VAR_2 = 1;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
