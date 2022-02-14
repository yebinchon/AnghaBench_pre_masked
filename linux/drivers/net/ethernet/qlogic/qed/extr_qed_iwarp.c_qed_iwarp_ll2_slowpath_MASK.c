
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct unaligned_opaque_data {scalar_t__ cid; } ;
struct qed_iwarp_fpdu {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_iwarp_fpdu*,int ,int) ;
 struct qed_iwarp_fpdu* FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct unaligned_opaque_data*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1,
         u8 VAR_2,
         u32 VAR_3, u32 VAR_4)
{
 struct unaligned_opaque_data VAR_5;
 struct qed_hwfn *VAR_6 = VAR_1;
 struct qed_iwarp_fpdu *VAR_7;

 FUNC_3(VAR_6, &VAR_5,
          VAR_3, VAR_4);

 FUNC_0(VAR_6, VAR_0, "(0x%x) Flush fpdu\n",
     VAR_5.cid);

 VAR_7 = FUNC_2(VAR_6, (u16)VAR_5.cid);
 if (VAR_7)
  FUNC_1(VAR_7, 0, sizeof(*VAR_7));
}
