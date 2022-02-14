
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; struct qed_ptt* p_dpc_ptt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_10 ;
 int FUNC_2 (int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 struct qed_ptt *VAR_20 = VAR_14->p_dpc_ptt;






 VAR_15 = FUNC_3(VAR_14, VAR_20, VAR_5);
 if (!(VAR_15 & ~VAR_7))
  return 0;

 FUNC_1(VAR_14->cdev, "DORQ attention. int_sts was %x\n", VAR_15);


 if (VAR_15 & (VAR_6 |
         VAR_8)) {

  VAR_16 = FUNC_3(VAR_14, VAR_20,
        VAR_4) &
      VAR_12;
  VAR_17 = FUNC_3(VAR_14, VAR_20, VAR_0);
  VAR_18 = FUNC_3(VAR_14, VAR_20,
     VAR_1);
  VAR_19 = FUNC_3(VAR_14, VAR_20,
       VAR_2);


  FUNC_1(VAR_14->cdev,
     "Doorbell drop occurred\n"
     "Address\t\t0x%08x\t(second BAR address)\n"
     "FID\t\t0x%04x\t\t(Opaque FID)\n"
     "Size\t\t0x%04x\t\t(in bytes)\n"
     "1st drop reason\t0x%08x\t(details on first drop since last handling)\n"
     "Sticky reasons\t0x%08x\t(all drop reasons since last handling)\n",
     VAR_18,
     FUNC_2(VAR_17, VAR_11),
     FUNC_2(VAR_17, VAR_13) * 4,
     VAR_16, VAR_19);


  FUNC_4(VAR_14, VAR_20, VAR_3, 0);




  FUNC_4(VAR_14,
         VAR_20,
         VAR_9,
         VAR_6 |
         VAR_8);


  if ((VAR_15 & ~(VAR_6 |
     VAR_8 |
     VAR_7)) == 0)
   return 0;
 }


 FUNC_0(VAR_14, "DORQ fatal attention\n");

 return -VAR_10;
}
