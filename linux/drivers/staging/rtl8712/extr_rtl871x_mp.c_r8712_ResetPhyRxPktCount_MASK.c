
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _adapter*,int ,int) ;

void FUNC_1(struct _adapter *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++) {
  VAR_5 = 0;
  VAR_5 |= (VAR_4 << 28);
  VAR_5 |= 0x08000000;
  FUNC_0(VAR_3, VAR_2, VAR_5);
 }
}
