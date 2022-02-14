
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int feature_config_flags; } ;
struct bnx2x {TYPE_1__ link_params; } ;
struct TYPE_4__ {scalar_t__ aer; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
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
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_8 (struct bnx2x*) ;
 TYPE_2__* FUNC_9 (struct bnx2x*) ;
 int VAR_13 ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct bnx2x *VAR_14)
{
 int VAR_15 = 10;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 FUNC_0("Entering Previous Unload Flow\n");




 FUNC_6(VAR_14);


 VAR_18 = (FUNC_2(VAR_14) <= 5) ?
        (VAR_11 + FUNC_2(VAR_14) * 8) :
        (VAR_12 + (FUNC_2(VAR_14) - 6) * 8);

 VAR_19 = FUNC_4(VAR_14, VAR_18);
 if (VAR_19) {
  if (VAR_19 & VAR_6) {
   FUNC_0("Release Previously held NVRAM lock\n");
   FUNC_5(VAR_14, VAR_10,
          (VAR_8 << FUNC_3(VAR_14)));
  }

  FUNC_0("Release Previously held hw lock\n");
  FUNC_5(VAR_14, VAR_18, 0xffffffff);
 } else
  FUNC_0("No need to release hw/nvram locks\n");

 if (VAR_7 & FUNC_4(VAR_14, VAR_9)) {
  FUNC_0("Release previously held alr\n");
  FUNC_12(VAR_14);
 }

 do {
  int VAR_20 = 0;

  VAR_17 = FUNC_7(VAR_14, VAR_1, 0);
  if (!VAR_17) {
   FUNC_1("MCP response failure, aborting\n");
   VAR_16 = -VAR_2;
   break;
  }

  VAR_16 = FUNC_13(&VAR_13);
  if (VAR_16) {
   FUNC_1("Cannot check for AER; Received %d when tried to take lock\n",
      VAR_16);
  } else {

   VAR_20 = !!(FUNC_9(VAR_14) &&
     FUNC_9(VAR_14)->aer);
   FUNC_15(&VAR_13);
  }

  if (VAR_17 == VAR_5 || VAR_20) {
   VAR_16 = FUNC_10(VAR_14);
   break;
  }


  VAR_16 = FUNC_11(VAR_14);
  if (VAR_16 != VAR_0)
   break;

  FUNC_14(20);
 } while (--VAR_15);

 if (!VAR_15 || VAR_16) {
  FUNC_0("Unloading previous driver did not occur, Possibly due to MF UNDI\n");
  VAR_16 = -VAR_3;
 }


 if (FUNC_8(VAR_14))
  VAR_14->link_params.feature_config_flags |=
   VAR_4;

 FUNC_0("Finished Previous Unload Flow [%d]\n", VAR_16);

 return VAR_16;
}
