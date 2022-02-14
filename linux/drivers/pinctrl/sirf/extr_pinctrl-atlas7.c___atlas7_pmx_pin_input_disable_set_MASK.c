
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atlas7_pmx {scalar_t__* regs; } ;
struct atlas7_pad_mux {int dinput_bit; int dinput_val_bit; scalar_t__ dinput_val_reg; scalar_t__ dinput_reg; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atlas7_pmx *VAR_5,
    const struct atlas7_pad_mux *VAR_6)
{






 if (VAR_6->dinput_reg && VAR_6->dinput_val_reg) {
  FUNC_1(VAR_4 << VAR_6->dinput_bit,
   VAR_5->regs[VAR_0] + FUNC_0(VAR_6->dinput_reg));
  FUNC_1(VAR_3 << VAR_6->dinput_bit,
   VAR_5->regs[VAR_0] + VAR_6->dinput_reg);


  FUNC_1(VAR_2 << VAR_6->dinput_val_bit,
   VAR_5->regs[VAR_0] + FUNC_0(VAR_6->dinput_val_reg));
  FUNC_1(VAR_1 << VAR_6->dinput_val_bit,
   VAR_5->regs[VAR_0] + VAR_6->dinput_val_reg);
 }
}
