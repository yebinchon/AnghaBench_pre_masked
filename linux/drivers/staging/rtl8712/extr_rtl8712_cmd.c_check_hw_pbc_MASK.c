
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct _adapter {scalar_t__ pid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct _adapter*,int ) ;
 int FUNC_4 (struct _adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct _adapter *VAR_7)
{
 u8 VAR_8;

 FUNC_4(VAR_7, VAR_5, (VAR_0 | VAR_1));
 VAR_8 = FUNC_3(VAR_7, VAR_3);
 VAR_8 &= ~(VAR_4);
 FUNC_4(VAR_7, VAR_3, VAR_8);
 VAR_8 = FUNC_3(VAR_7, VAR_2);
 if (VAR_8 == 0xff)
  return;
 if (VAR_8 & VAR_4) {



  FUNC_0("CheckPbcGPIO - PBC is pressed !!!!\n");



  if (VAR_7->pid == 0)
   return;
  FUNC_2(FUNC_1(VAR_7->pid), VAR_6, 1);
 }
}
