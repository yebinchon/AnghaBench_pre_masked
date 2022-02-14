
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {int p_dpc_ptt; int cdev; } ;


 int FUNC_0 (int ,char*,int,int,char*,int,int ,int,char*,int) ;
 int FUNC_1 (int,int ) ;
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
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qed_hwfn*,int ,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_11)
{
 u32 VAR_12, VAR_13;




 VAR_12 = FUNC_3(VAR_11, VAR_11->p_dpc_ptt,
       VAR_2);
 if (!(VAR_12 & VAR_9))
  goto out;


 VAR_12 = FUNC_3(VAR_11, VAR_11->p_dpc_ptt,
       VAR_0);
 VAR_13 = FUNC_3(VAR_11, VAR_11->p_dpc_ptt,
        VAR_1);

 FUNC_0(VAR_11->cdev,
  "GRC timeout [%08x:%08x] - %s Address [%08x] [Master %s] [PF: %02x %s %02x]\n",
  VAR_13, VAR_12,
  (VAR_12 & VAR_8) ? "Write to" : "Read from",
  FUNC_1(VAR_12, VAR_3) << 2,
  FUNC_2(FUNC_1(VAR_12, VAR_4)),
  FUNC_1(VAR_13, VAR_5),
  (FUNC_1(VAR_13, VAR_6) ==
   VAR_7) ? "VF" : "(Irrelevant)",
  FUNC_1(VAR_13, VAR_10));

out:

 FUNC_4(VAR_11, VAR_11->p_dpc_ptt,
        VAR_2, 0);
 return 0;
}
