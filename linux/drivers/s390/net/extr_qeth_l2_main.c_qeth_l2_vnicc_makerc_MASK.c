
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int FUNC_0 (struct qeth_card*,int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_6, u16 VAR_7)
{
 int VAR_8;

 switch (VAR_7) {
 case 130:
  return VAR_7;
 case 132:
 case 131:
  VAR_8 = -VAR_5;
  break;
 case 129:
  VAR_8 = -VAR_1;
  break;
 case 128:
  VAR_8 = -VAR_2;
  break;
 case 134:
  VAR_8 = -VAR_4;
  break;
 case 133:
  VAR_8 = -VAR_0;
  break;
 default:
  VAR_8 = -VAR_3;
 }

 FUNC_0(VAR_6, 2, "err%04x", VAR_7);
 return VAR_8;
}
