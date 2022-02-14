
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum bpf_type { ____Placeholder_bpf_type } bpf_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(u32 VAR_2, enum bpf_type *VAR_3)
{
 void *VAR_4;

 *VAR_3 = VAR_0;
 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_4)) {
  *VAR_3 = VAR_1;
  VAR_4 = FUNC_2(VAR_2);
 }

 return VAR_4;
}
