
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bpf_verifier_state {int curframe; int * frame; } ;
struct bpf_reg_state {scalar_t__ off; scalar_t__ umax_value; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct bpf_reg_state*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_state *VAR_1,
       struct bpf_reg_state *VAR_2,
       enum bpf_reg_type VAR_3,
       bool VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 if (VAR_2->off < 0 ||
     (VAR_2->off == 0 && VAR_4))

  return;

 if (VAR_2->umax_value > VAR_0 ||
     VAR_2->umax_value + VAR_2->off > VAR_0)



  return;

 VAR_5 = VAR_2->off;
 if (VAR_4)
  VAR_5--;
 for (VAR_6 = 0; VAR_6 <= VAR_1->curframe; VAR_6++)
  FUNC_0(VAR_1->frame[VAR_6], VAR_2, VAR_3,
      VAR_5);
}
