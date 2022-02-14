
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_prog_array {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_prog_array*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bpf_prog_array*) ;

int FUNC_2(struct bpf_prog_array *VAR_1,
        u32 *VAR_2, u32 VAR_3,
        u32 *VAR_4)
{
 u32 VAR_5 = 0;

 if (VAR_1)
  VAR_5 = FUNC_1(VAR_1);

 *VAR_4 = VAR_5;


 if (!VAR_3 || !VAR_5)
  return 0;


 return FUNC_0(VAR_1, VAR_2, VAR_3) ? -VAR_0
             : 0;
}
