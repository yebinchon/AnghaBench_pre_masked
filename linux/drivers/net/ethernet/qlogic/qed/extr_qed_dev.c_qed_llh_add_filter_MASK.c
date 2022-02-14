
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_llh_filter_details {int enable; int value; int mode; scalar_t__ protocol_type; scalar_t__ hdr_sel; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__,struct qed_llh_filter_details*) ;

__attribute__((used)) static int
FUNC_1(struct qed_hwfn *VAR_0,
     struct qed_ptt *VAR_1,
     u8 VAR_2,
     u8 VAR_3, u8 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct qed_llh_filter_details VAR_7;

 VAR_7.enable = 1;
 VAR_7.value = ((u64)VAR_5 << 32) | VAR_6;
 VAR_7.hdr_sel = 0;
 VAR_7.protocol_type = VAR_4;

 VAR_7.mode = VAR_4 ? 1 : 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
         &VAR_7);
}
