
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

 if (VAR_7)
  FUNC_0(VAR_6, 2, "err%04x", VAR_7);
 switch (VAR_7) {
 case 128:
  VAR_8 = 0;
  break;
 case 129:
  VAR_8 = -VAR_4;
  break;
 case 135:
  VAR_8 = -VAR_3;
  break;
 case 133:
 case 134:
  VAR_8 = -VAR_0;
  break;
 case 131:
 case 132:
  VAR_8 = -VAR_5;
  break;
 case 130:
  VAR_8 = -VAR_2;
  break;
 default:
  VAR_8 = -VAR_1;
  break;
 }
 return VAR_8;
}
