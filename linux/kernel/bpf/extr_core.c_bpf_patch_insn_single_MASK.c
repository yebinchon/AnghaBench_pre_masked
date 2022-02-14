
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_prog {int insnsi; int len; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct bpf_prog* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bpf_prog*,int,int,int,int) ;
 int FUNC_3 (struct bpf_prog*,int,int) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct bpf_insn const*,int) ;
 int FUNC_7 (int,int,int) ;

struct bpf_prog *FUNC_8(struct bpf_prog *VAR_3, u32 VAR_4,
           const struct bpf_insn *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9 = VAR_6 - 1;
 const u32 VAR_10 = VAR_2;
 struct bpf_prog *VAR_11;
 int VAR_12;


 if (VAR_9 == 0) {
  FUNC_6(VAR_3->insnsi + VAR_4, VAR_5, sizeof(*VAR_5));
  return VAR_3;
 }

 VAR_7 = VAR_3->len + VAR_9;






 if (VAR_7 > VAR_10 &&
     (VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_4 + 1, VAR_4 + VAR_6, 1)))
  return FUNC_1(VAR_12);





 VAR_11 = FUNC_4(VAR_3, FUNC_5(VAR_7),
        VAR_1);
 if (!VAR_11)
  return FUNC_1(-VAR_0);

 VAR_11->len = VAR_7;
 VAR_8 = VAR_7 - VAR_4 - VAR_6;

 FUNC_7(VAR_11->insnsi + VAR_4 + VAR_6, VAR_11->insnsi + VAR_4 + 1,
  sizeof(*VAR_5) * VAR_8);
 FUNC_6(VAR_11->insnsi + VAR_4, VAR_5, sizeof(*VAR_5) * VAR_6);





 FUNC_0(FUNC_2(VAR_11, VAR_4, VAR_4 + 1, VAR_4 + VAR_6, 0));

 FUNC_3(VAR_11, VAR_4, VAR_9);

 return VAR_11;
}
