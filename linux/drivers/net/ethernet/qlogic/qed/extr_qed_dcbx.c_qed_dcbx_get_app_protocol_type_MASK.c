
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_hwfn {int dummy; } ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_6(struct qed_hwfn *VAR_7,
          u32 VAR_8,
          u16 VAR_9, enum dcbx_protocol_type *VAR_10, bool VAR_11)
{
 if (FUNC_2(VAR_8, VAR_9, VAR_11)) {
  *VAR_10 = VAR_2;
 } else if (FUNC_4(VAR_8, VAR_9, VAR_11)) {
  *VAR_10 = VAR_4;
 } else if (FUNC_3(VAR_8, VAR_9, VAR_11)) {
  *VAR_10 = VAR_3;
 } else if (FUNC_1(VAR_8, VAR_9, VAR_11)) {
  *VAR_10 = VAR_1;
 } else if (FUNC_5(VAR_8, VAR_9, VAR_11)) {
  *VAR_10 = VAR_5;
 } else {
  *VAR_10 = VAR_0;
  FUNC_0(VAR_7, VAR_6,
      "No action required, App TLV entry = 0x%x\n",
      VAR_8);
  return 0;
 }

 return 1;
}
