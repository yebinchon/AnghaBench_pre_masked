
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct btf_verifier_env {int dummy; } ;
struct btf_type {scalar_t__ size; } ;
typedef scalar_t__ s32 ;
typedef int int_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 scalar_t__ FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_verifier_env*,struct btf_type const*,char*,scalar_t__,...) ;
 int FUNC_8 (struct btf_verifier_env*,struct btf_type const*,char*,...) ;

__attribute__((used)) static s32 FUNC_9(struct btf_verifier_env *VAR_7,
         const struct btf_type *VAR_8,
         u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12 = sizeof(VAR_10);
 u16 VAR_13;

 if (VAR_9 < VAR_12) {
  FUNC_7(VAR_7, VAR_8,
           "meta_left:%u meta_needed:%u",
           VAR_9, VAR_12);
  return -VAR_5;
 }

 if (FUNC_6(VAR_8)) {
  FUNC_8(VAR_7, VAR_8, "vlen != 0");
  return -VAR_5;
 }

 if (FUNC_5(VAR_8)) {
  FUNC_8(VAR_7, VAR_8, "Invalid btf_info kind_flag");
  return -VAR_5;
 }

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 & ~VAR_3) {
  FUNC_7(VAR_7, VAR_8, "Invalid int_data:%x",
           VAR_10);
  return -VAR_5;
 }

 VAR_11 = FUNC_1(VAR_10) + FUNC_3(VAR_10);

 if (VAR_11 > VAR_0) {
  FUNC_8(VAR_7, VAR_8, "nr_bits exceeds %zu",
          VAR_0);
  return -VAR_5;
 }

 if (FUNC_0(VAR_11) > VAR_8->size) {
  FUNC_8(VAR_7, VAR_8, "nr_bits exceeds type_size");
  return -VAR_5;
 }







 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13 &&
     VAR_13 != VAR_4 &&
     VAR_13 != VAR_2 &&
     VAR_13 != VAR_1) {
  FUNC_8(VAR_7, VAR_8, "Unsupported encoding");
  return -VAR_6;
 }

 FUNC_8(VAR_7, VAR_8, ((void*)0));

 return VAR_12;
}
