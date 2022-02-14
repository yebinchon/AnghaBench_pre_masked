
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btf_verifier_env {scalar_t__* visit_states; struct btf* btf; } ;
struct btf {scalar_t__* resolved_ids; scalar_t__* resolved_sizes; scalar_t__ nr_types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct btf_verifier_env *VAR_3)
{
 struct btf *VAR_4 = VAR_3->btf;
 u32 VAR_5 = VAR_4->nr_types;
 u32 *VAR_6 = ((void*)0);
 u32 *VAR_7 = ((void*)0);
 u8 *VAR_8 = ((void*)0);


 VAR_6 = FUNC_0(VAR_5 + 1, sizeof(*VAR_6),
      VAR_1 | VAR_2);
 if (!VAR_6)
  goto nomem;

 VAR_7 = FUNC_0(VAR_5 + 1, sizeof(*VAR_7),
    VAR_1 | VAR_2);
 if (!VAR_7)
  goto nomem;

 VAR_8 = FUNC_0(VAR_5 + 1, sizeof(*VAR_8),
    VAR_1 | VAR_2);
 if (!VAR_8)
  goto nomem;

 VAR_4->resolved_sizes = VAR_6;
 VAR_4->resolved_ids = VAR_7;
 VAR_3->visit_states = VAR_8;

 return 0;

nomem:
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 FUNC_1(VAR_8);
 return -VAR_0;
}
