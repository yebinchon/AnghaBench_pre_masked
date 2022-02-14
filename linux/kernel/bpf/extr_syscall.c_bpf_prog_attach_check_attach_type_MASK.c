
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int type; int expected_attach_type; int enforce_expected_attach_type; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;






 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct bpf_prog *VAR_1,
          enum bpf_attach_type VAR_2)
{
 switch (VAR_1->type) {
 case 130:
 case 128:
 case 129:
  return VAR_2 == VAR_1->expected_attach_type ? 0 : -VAR_0;
 case 131:
  return VAR_1->enforce_expected_attach_type &&
   VAR_1->expected_attach_type != VAR_2 ?
   -VAR_0 : 0;
 default:
  return 0;
 }
}
