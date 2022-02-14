
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int,int*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct adapter*,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 switch (VAR_3) {
 case 129:
  *VAR_4 = FUNC_2(VAR_2, VAR_0 | VAR_1);
  break;

 case 128:
  {

   *((u16 *)VAR_4) = FUNC_1(VAR_2, 0x88);
  }
  break;
 default:
  FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 }
}
