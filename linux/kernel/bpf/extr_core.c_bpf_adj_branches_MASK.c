
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct bpf_prog {scalar_t__ len; struct bpf_insn* insnsi; } ;
struct bpf_insn {scalar_t__ src_reg; int code; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct bpf_insn*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const) ;
 int FUNC_3 (struct bpf_insn*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const) ;

__attribute__((used)) static int FUNC_4(struct bpf_prog *VAR_5, u32 VAR_6, s32 VAR_7,
       s32 VAR_8, const bool VAR_9)
{
 u32 VAR_10, VAR_11 = VAR_5->len + (VAR_9 ? VAR_8 - VAR_7 : 0);
 struct bpf_insn *VAR_12 = VAR_5->insnsi;
 int VAR_13 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++, VAR_12++) {
  u8 VAR_14;





  if (VAR_9 && VAR_10 == VAR_6) {
   VAR_10 = VAR_8;
   VAR_12 = VAR_5->insnsi + VAR_7;
  }
  VAR_14 = VAR_12->code;
  if ((FUNC_0(VAR_14) != VAR_2 &&
       FUNC_0(VAR_14) != VAR_3) ||
      FUNC_1(VAR_14) == VAR_1)
   continue;

  if (FUNC_1(VAR_14) == VAR_0) {
   if (VAR_12->src_reg != VAR_4)
    continue;
   VAR_13 = FUNC_2(VAR_12, VAR_6, VAR_7,
         VAR_8, VAR_10, VAR_9);
  } else {
   VAR_13 = FUNC_3(VAR_12, VAR_6, VAR_7,
         VAR_8, VAR_10, VAR_9);
  }
  if (VAR_13)
   break;
 }

 return VAR_13;
}
