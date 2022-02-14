
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_virtf {int flr_clnup_stage; } ;
struct bnx2x {TYPE_1__* vfdb; } ;
struct TYPE_2__ {int* flrd_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 size_t FUNC_1 (struct bnx2x*) ;
 struct bnx2x_virtf* FUNC_2 (struct bnx2x*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bnx2x*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct bnx2x*,int ,int ) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 scalar_t__ FUNC_8 (struct bnx2x*,int,int ) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_virtf*) ;
 int ** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(struct bnx2x *VAR_9)
{
 struct bnx2x_virtf *VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {

  if (FUNC_8(VAR_9, VAR_11, VAR_8) != VAR_5 ||
      !FUNC_8(VAR_9, VAR_11, VAR_7))
   continue;

  FUNC_3(VAR_0, "next vf to cleanup: %d. Num of vfs: %d\n",
     VAR_11, FUNC_0(VAR_9));

  VAR_10 = FUNC_2(VAR_9, VAR_11);


  FUNC_6(VAR_9, VAR_10, VAR_2);


  FUNC_9(VAR_9, VAR_10);


  VAR_10->flr_clnup_stage = 0;
  FUNC_7(VAR_9, VAR_10, VAR_2);
 }
 FUNC_3(VAR_1, "DRV_STATUS_VF_DISABLED ACK for vfs 0x%x 0x%x\n",
    VAR_9->vfdb->flrd_vfs[0], VAR_9->vfdb->flrd_vfs[1]);
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  FUNC_4(VAR_9, VAR_6[FUNC_1(VAR_9)][VAR_11],
     VAR_9->vfdb->flrd_vfs[VAR_11]);

 FUNC_5(VAR_9, VAR_3, 0);




 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  FUNC_4(VAR_9, VAR_6[FUNC_1(VAR_9)][VAR_11], 0);
}
