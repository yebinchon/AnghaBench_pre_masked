
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int session_type; int hfi_codec; struct venus_core* core; } ;
struct venus_core {int dummy; } ;
struct venus_caps {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct venus_caps*,int ,int) ;
 int FUNC_1 (int) ;
 struct venus_caps* FUNC_2 (struct venus_core*,int ,int ) ;

int FUNC_3(struct venus_inst *VAR_4, u32 VAR_5,
         u32 *VAR_6, u32 *VAR_7, bool VAR_8)
{
 struct venus_core *VAR_9 = VAR_4->core;
 struct venus_caps *VAR_10;
 u32 VAR_11, VAR_12 = FUNC_1(VAR_5);
 bool VAR_13, VAR_14;

 *VAR_6 = *VAR_7 = 0;

 if (!VAR_12)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9, VAR_4->hfi_codec, VAR_4->session_type);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_8) {
  VAR_11 = VAR_12 | VAR_3;
  VAR_14 = FUNC_0(VAR_10, VAR_1,
      VAR_11);
  VAR_13 = FUNC_0(VAR_10, VAR_2, VAR_12);

  if (VAR_14 && VAR_13) {
   *VAR_6 = VAR_11;
   *VAR_7 = VAR_12;
   return 0;
  }
 }

 VAR_13 = FUNC_0(VAR_10, VAR_1, VAR_12);
 if (VAR_13) {
  *VAR_6 = VAR_12;
  *VAR_7 = 0;
  return 0;
 }

 VAR_13 = FUNC_0(VAR_10, VAR_2, VAR_12);
 if (VAR_13) {
  *VAR_6 = 0;
  *VAR_7 = VAR_12;
  return 0;
 }

 return -VAR_0;
}
