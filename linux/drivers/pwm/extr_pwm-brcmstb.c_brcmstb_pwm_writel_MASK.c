
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_pwm {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct brcmstb_pwm *VAR_2, u32 VAR_3,
          unsigned int VAR_4)
{
 if (FUNC_0(VAR_1) && FUNC_0(VAR_0))
  FUNC_1(VAR_3, VAR_2->base + VAR_4);
 else
  FUNC_2(VAR_3, VAR_2->base + VAR_4);
}
