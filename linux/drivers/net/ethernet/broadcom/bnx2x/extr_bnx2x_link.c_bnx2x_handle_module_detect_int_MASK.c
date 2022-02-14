
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct link_params {int link_flags; int port; int shmem_base; int chip_id; struct bnx2x_phy* phy; struct bnx2x* bp; } ;
struct bnx2x_phy {int media_type; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct bnx2x*,int ,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int ,int ,int *,int *) ;
 int FUNC_5 (struct link_params*,struct bnx2x_phy*,int) ;
 int FUNC_6 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_7 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_8 (struct bnx2x*,struct link_params*) ;
 int FUNC_9 (struct link_params*,int ) ;
 int FUNC_10 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_11 (struct link_params*,struct bnx2x_phy*,int) ;
 scalar_t__ FUNC_12 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_13 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_14 (struct bnx2x*,struct bnx2x_phy*,int) ;

void FUNC_15(struct link_params *VAR_11)
{
 struct bnx2x *VAR_12 = VAR_11->bp;
 struct bnx2x_phy *VAR_13;
 u32 VAR_14;
 u8 VAR_15, VAR_16;
 if (FUNC_0(VAR_12)) {
  VAR_13 = &VAR_11->phy[VAR_3];

  FUNC_11(VAR_11, VAR_13, 1);
 } else {
  VAR_13 = &VAR_11->phy[VAR_2];
 }
 if (FUNC_4(VAR_12, VAR_11->chip_id, VAR_11->shmem_base,
          VAR_11->port, &VAR_15, &VAR_16) ==
     -VAR_0) {
  FUNC_1(VAR_9, "Failed to get MOD_ABS interrupt config\n");
  return;
 }


 FUNC_9(VAR_11, VAR_6);


 VAR_14 = FUNC_3(VAR_12, VAR_15, VAR_16);


 if (VAR_14 == 0) {
  FUNC_8(VAR_12, VAR_11);
  FUNC_6(VAR_11, VAR_13);

  FUNC_5(VAR_11, VAR_13, 1);
  FUNC_7(VAR_12, VAR_15,
       VAR_7,
       VAR_16);
  if (FUNC_12(VAR_13, VAR_11) == 0) {
   FUNC_10(VAR_13, VAR_11);
   if (FUNC_0(VAR_12)) {
    u16 VAR_17;




    FUNC_2(VAR_12, VAR_13,
      VAR_4,
      VAR_5,
      &VAR_17);
    if ((!VAR_17) &&
        (VAR_11->link_flags &
         VAR_10)) {
     FUNC_14(VAR_12, VAR_13, 1);
     FUNC_13(VAR_13, VAR_11);
     FUNC_14(VAR_12, VAR_13, 0);
    }
   }
  } else {
   FUNC_1(VAR_9, "SFP+ module is not initialized\n");
  }
 } else {
  FUNC_7(VAR_12, VAR_15,
       VAR_8,
       VAR_16);



  VAR_13->media_type = VAR_1;
 }
}
