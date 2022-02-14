
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct _adapter {scalar_t__ surprise_removed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _adapter*,int*) ;
 int FUNC_1 (struct _adapter*,int ) ;
 int FUNC_2 (struct _adapter*,int ,int ) ;
 int FUNC_3 (struct _adapter*,int*) ;

__attribute__((used)) static void FUNC_4(struct _adapter *VAR_3)
{
 u16 VAR_4;

 if (VAR_3->surprise_removed)
  return;
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_3->surprise_removed)
  return;
 VAR_4 &= ~(VAR_1 | VAR_2);
 FUNC_2(VAR_3, VAR_0, (u8)VAR_4);
 if (VAR_3->surprise_removed)
  return;
 FUNC_3(VAR_3, &VAR_4);
 if (VAR_3->surprise_removed)
  return;
 FUNC_0(VAR_3, &VAR_4);
}
