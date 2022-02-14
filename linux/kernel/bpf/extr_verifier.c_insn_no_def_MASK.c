
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bpf_insn {int code; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_1(struct bpf_insn *VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_4->code);

 return (VAR_5 == VAR_0 || VAR_5 == VAR_1 ||
  VAR_5 == VAR_3 || VAR_5 == VAR_2);
}
