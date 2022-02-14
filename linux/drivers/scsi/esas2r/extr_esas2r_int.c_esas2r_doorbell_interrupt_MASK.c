
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int flags2; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct esas2r_adapter*,int ,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct esas2r_adapter *VAR_9, u32 VAR_10)
{
 if (!(VAR_10 & VAR_3)) {
  FUNC_5();
  FUNC_4("doorbell: %x", VAR_10);
 }


 FUNC_7(VAR_9, VAR_8, VAR_10);

 if (VAR_10 & VAR_6)
  FUNC_8(VAR_1, &VAR_9->flags);

 if (VAR_10 & VAR_3)
  FUNC_0(VAR_2, &VAR_9->flags);

 if (VAR_10 & VAR_5) {
  FUNC_1("*** Firmware Panic ***");
  FUNC_3(VAR_7, "The firmware has panicked");
 }

 if (VAR_10 & VAR_4) {
  FUNC_8(VAR_0, &VAR_9->flags2);
  FUNC_2(VAR_9);
 }

 if (!(VAR_10 & VAR_3))
  FUNC_6();
}
