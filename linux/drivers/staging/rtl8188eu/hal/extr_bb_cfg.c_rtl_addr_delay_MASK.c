
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_0,
      u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 switch (VAR_1) {
 case 0xfe:
  FUNC_1(50);
  break;
 case 0xfd:
  FUNC_0(5);
  break;
 case 0xfc:
  FUNC_0(1);
  break;
 case 0xfb:
  FUNC_3(50);
  break;
 case 0xfa:
  FUNC_3(5);
  break;
 case 0xf9:
  FUNC_3(1);
  break;
 default:
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
