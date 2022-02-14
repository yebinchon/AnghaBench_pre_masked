
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rel_pf_id; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int) ;
 int FUNC_3 (struct qed_hwfn*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int FUNC_7(struct qed_hwfn *VAR_12,
        struct qed_ptt *VAR_13, u16 VAR_14, bool VAR_15)
{
 u32 VAR_16 = 0, VAR_17, VAR_18 = VAR_1;
 int VAR_19 = -VAR_0;

 VAR_17 = VAR_3 +
  FUNC_4(VAR_12->rel_pf_id);

 if (VAR_15)
  VAR_14 += 0x10;

 VAR_16 |= VAR_11 <<
  VAR_5;
 VAR_16 |= 1 << VAR_7;
 VAR_16 |= VAR_14 << VAR_6;
 VAR_16 |= VAR_8 << VAR_9;


 if (FUNC_2(VAR_12, VAR_17)) {
  FUNC_0(VAR_12,
     "Unexpected; Found final cleanup notification before initiating final cleanup\n");
  FUNC_3(VAR_12, VAR_17, 0);
 }

 FUNC_1(VAR_12, VAR_4,
     "Sending final cleanup for PFVF[%d] [Command %08x]\n",
     VAR_14, VAR_16);

 FUNC_6(VAR_12, VAR_13, VAR_10, VAR_16);


 while (!FUNC_2(VAR_12, VAR_17) && VAR_18--)
  FUNC_5(VAR_2);

 if (FUNC_2(VAR_12, VAR_17))
  VAR_19 = 0;
 else
  FUNC_0(VAR_12,
     "Failed to receive FW final cleanup notification\n");


 FUNC_3(VAR_12, VAR_17, 0);

 return VAR_19;
}
