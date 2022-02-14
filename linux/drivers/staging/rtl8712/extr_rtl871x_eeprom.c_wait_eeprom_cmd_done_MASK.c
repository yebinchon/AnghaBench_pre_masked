
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _adapter*,int ) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u16 FUNC_3(struct _adapter *VAR_3)
{
 u8 VAR_4;
 u16 VAR_5;

 FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < 200; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  if (VAR_4 & VAR_2)
   return 1;
  FUNC_2(VAR_0);
 }
 return 0;
}
