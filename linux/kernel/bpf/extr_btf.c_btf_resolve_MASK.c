
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct resolve_vertex {int t; void* type_id; } ;
struct btf_verifier_env {void* log_type_id; int resolve_mode; } ;
struct btf_type {int dummy; } ;
struct TYPE_2__ {int (* resolve ) (struct btf_verifier_env*,struct resolve_vertex const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct btf_verifier_env*,struct btf_type const*,void*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,char*,...) ;
 struct resolve_vertex* FUNC_3 (struct btf_verifier_env*) ;
 int FUNC_4 (struct btf_verifier_env*,struct btf_type const*,void*) ;
 int FUNC_5 (struct btf_verifier_env*,struct resolve_vertex const*) ;

__attribute__((used)) static int FUNC_6(struct btf_verifier_env *VAR_5,
         const struct btf_type *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_5->log_type_id;
 const struct resolve_vertex *VAR_9;
 int VAR_10 = 0;

 VAR_5->resolve_mode = VAR_4;
 FUNC_4(VAR_5, VAR_6, VAR_7);
 while (!VAR_10 && (VAR_9 = FUNC_3(VAR_5))) {
  VAR_5->log_type_id = VAR_9->type_id;
  VAR_10 = FUNC_1(VAR_9->t)->resolve(VAR_5, VAR_9);
 }

 VAR_5->log_type_id = VAR_7;
 if (VAR_10 == -VAR_0) {
  FUNC_2(VAR_5, VAR_6,
          "Exceeded max resolving depth:%u",
          VAR_3);
 } else if (VAR_10 == -VAR_1) {
  FUNC_2(VAR_5, VAR_6, "Loop detected");
 }


 if (!VAR_10 && !FUNC_0(VAR_5, VAR_6, VAR_7)) {
  FUNC_2(VAR_5, VAR_6, "Invalid resolve state");
  VAR_10 = -VAR_2;
 }

 VAR_5->log_type_id = VAR_8;
 return VAR_10;
}
