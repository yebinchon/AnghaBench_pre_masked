
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int* mf_config; int flags; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 size_t FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_13, u32 VAR_14)
{
 u32 VAR_15, VAR_16;


 if (VAR_14 & VAR_7 &&
     VAR_14 & VAR_10) {
  FUNC_0("Received simultaneous events %08x\n", VAR_14);
  return;
 }

 if (VAR_14 & VAR_7) {
  VAR_16 = VAR_1;
  VAR_15 = VAR_2;
 } else {
  VAR_16 = VAR_3;
  VAR_15 = VAR_4;
 }

 FUNC_2(VAR_0, "oem_event 0x%x\n", VAR_14);

 if (VAR_14 & (VAR_6 |
       VAR_9)) {




  if (VAR_13->mf_config[FUNC_1(VAR_13)] & VAR_11) {
   FUNC_2(VAR_0, "mf_cfg function disabled\n");
   VAR_13->flags |= VAR_12;

   FUNC_4(VAR_13);
  } else {
   FUNC_2(VAR_0, "mf_cfg function enabled\n");
   VAR_13->flags &= ~VAR_12;

   FUNC_5(VAR_13);
  }
  VAR_14 &= ~(VAR_6 |
      VAR_9);
 }

 if (VAR_14 & (VAR_5 |
       VAR_8)) {
  FUNC_3(VAR_13);
  VAR_14 &= ~(VAR_5 |
      VAR_8);
 }


 if (VAR_14)
  FUNC_6(VAR_13, VAR_16, 0);
 else
  FUNC_6(VAR_13, VAR_15, 0);
}
