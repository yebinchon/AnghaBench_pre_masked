
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct btf_verifier_env {int log_type_id; int btf; } ;
struct btf_type {int info; int name_off; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ (* check_meta ) (struct btf_verifier_env*,struct btf_type const*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_verifier_env*,char*,int ,int,...) ;
 scalar_t__ FUNC_4 (struct btf_verifier_env*,struct btf_type const*,int) ;

__attribute__((used)) static s32 FUNC_5(struct btf_verifier_env *VAR_4,
     const struct btf_type *VAR_5,
     u32 VAR_6)
{
 u32 VAR_7 = VAR_6;
 s32 VAR_8;

 if (VAR_6 < sizeof(*VAR_5)) {
  FUNC_3(VAR_4, "[%u] meta_left:%u meta_needed:%zu",
     VAR_4->log_type_id, VAR_6, sizeof(*VAR_5));
  return -VAR_3;
 }
 VAR_6 -= sizeof(*VAR_5);

 if (VAR_5->info & ~VAR_0) {
  FUNC_3(VAR_4, "[%u] Invalid btf_info:%x",
     VAR_4->log_type_id, VAR_5->info);
  return -VAR_3;
 }

 if (FUNC_0(VAR_5->info) > VAR_1 ||
     FUNC_0(VAR_5->info) == VAR_2) {
  FUNC_3(VAR_4, "[%u] Invalid kind:%u",
     VAR_4->log_type_id, FUNC_0(VAR_5->info));
  return -VAR_3;
 }

 if (!FUNC_1(VAR_4->btf, VAR_5->name_off)) {
  FUNC_3(VAR_4, "[%u] Invalid name_offset:%u",
     VAR_4->log_type_id, VAR_5->name_off);
  return -VAR_3;
 }

 VAR_8 = FUNC_2(VAR_5)->check_meta(VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 -= VAR_8;

 return VAR_7 - VAR_6;
}
