
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_type { ____Placeholder_bpf_type } bpf_type ;




 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, enum bpf_type VAR_1)
{
 switch (VAR_1) {
 case 128:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
