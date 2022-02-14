
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mvebu_mpp_ctrl_data *VAR_7, unsigned VAR_8,
         unsigned long *VAR_9)
{
 unsigned long VAR_10 = FUNC_0(VAR_6);
 unsigned long VAR_11;

 switch (VAR_8) {
 case 24:
  VAR_11 = VAR_0;
  break;
 case 40:
  VAR_11 = VAR_2;
  break;
 case 46:
  VAR_11 = VAR_3;
  break;
 case 58:
  VAR_11 = VAR_4;
  break;
 case 62:
  VAR_11 = VAR_5;
  break;
 default:
  return -VAR_1;
 }

 *VAR_9 = ((VAR_10 & VAR_11) != 0);

 return 0;
}
