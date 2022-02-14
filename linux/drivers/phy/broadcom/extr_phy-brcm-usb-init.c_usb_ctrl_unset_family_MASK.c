
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct brcm_usb_init_params {size_t* usb_reg_bits_map; void* ctrl_regs; } ;


 size_t FUNC_0 (void*) ;
 int FUNC_1 (size_t,void*) ;

__attribute__((used)) static inline
void FUNC_2(struct brcm_usb_init_params *VAR_0,
      u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 void *VAR_4;

 VAR_3 = VAR_0->usb_reg_bits_map[VAR_2];
 VAR_4 = VAR_0->ctrl_regs + VAR_1;
 FUNC_1(FUNC_0(VAR_4) & ~VAR_3, VAR_4);
}
