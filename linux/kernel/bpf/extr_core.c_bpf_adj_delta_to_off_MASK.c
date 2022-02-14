
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_insn {scalar_t__ off; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct bpf_insn *VAR_3, u32 VAR_4, s32 VAR_5,
    s32 VAR_6, s32 VAR_7, const bool VAR_8)
{
 const s32 VAR_9 = VAR_2, VAR_10 = VAR_1;
 s32 VAR_11 = VAR_6 - VAR_5;
 s32 VAR_12 = VAR_3->off;

 if (VAR_7 < VAR_4 && VAR_7 + VAR_12 + 1 >= VAR_5)
  VAR_12 += VAR_11;
 else if (VAR_7 >= VAR_6 && VAR_7 + VAR_12 + 1 < VAR_6)
  VAR_12 -= VAR_11;
 if (VAR_12 < VAR_9 || VAR_12 > VAR_10)
  return -VAR_0;
 if (!VAR_8)
  VAR_3->off = VAR_12;
 return 0;
}
