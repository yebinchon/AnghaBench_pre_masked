
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_mediatek_chip {scalar_t__ regs; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct pwm_mediatek_chip *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 return FUNC_0(VAR_1->regs + VAR_0[VAR_2] + VAR_3);
}
