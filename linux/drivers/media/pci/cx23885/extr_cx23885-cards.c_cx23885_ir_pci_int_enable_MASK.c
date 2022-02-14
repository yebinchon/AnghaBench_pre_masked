
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_dev {int board; int sd_ir; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int ) ;

void FUNC_1(struct cx23885_dev *VAR_2)
{
 switch (VAR_2->board) {
 case 136:
 case 134:
 case 135:
  if (VAR_2->sd_ir)
   FUNC_0(VAR_2, VAR_1);
  break;
 case 130:
 case 129:
 case 137:
 case 133:
 case 132:
 case 131:
 case 140:
 case 139:
 case 142:
 case 128:
 case 143:
 case 141:
 case 138:
  if (VAR_2->sd_ir)
   FUNC_0(VAR_2, VAR_0);
  break;
 }
}
