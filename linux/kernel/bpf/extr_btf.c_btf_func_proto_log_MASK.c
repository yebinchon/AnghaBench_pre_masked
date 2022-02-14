
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct btf_verifier_env {int btf; } ;
struct btf_type {int type; } ;
struct btf_param {int name_off; scalar_t__ type; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_verifier_env*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct btf_verifier_env *VAR_0,
          const struct btf_type *VAR_1)
{
 const struct btf_param *VAR_2 = (const struct btf_param *)(VAR_1 + 1);
 u16 VAR_3 = FUNC_1(VAR_1), VAR_4;

 FUNC_2(VAR_0, "return=%u args=(", VAR_1->type);
 if (!VAR_3) {
  FUNC_2(VAR_0, "void");
  goto done;
 }

 if (VAR_3 == 1 && !VAR_2[0].type) {

  FUNC_2(VAR_0, "vararg");
  goto done;
 }

 FUNC_2(VAR_0, "%u %s", VAR_2[0].type,
    FUNC_0(VAR_0->btf,
           VAR_2[0].name_off));
 for (VAR_4 = 1; VAR_4 < VAR_3 - 1; VAR_4++)
  FUNC_2(VAR_0, ", %u %s", VAR_2[VAR_4].type,
     FUNC_0(VAR_0->btf,
            VAR_2[VAR_4].name_off));

 if (VAR_3 > 1) {
  const struct btf_param *VAR_5 = &VAR_2[VAR_3 - 1];

  if (VAR_5->type)
   FUNC_2(VAR_0, ", %u %s", VAR_5->type,
      FUNC_0(VAR_0->btf,
             VAR_5->name_off));
  else
   FUNC_2(VAR_0, ", vararg");
 }

done:
 FUNC_2(VAR_0, ")");
}
