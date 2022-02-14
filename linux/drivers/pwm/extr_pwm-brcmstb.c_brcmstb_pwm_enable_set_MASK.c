
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct brcmstb_pwm {int lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct brcmstb_pwm*,int ) ;
 int FUNC_1 (struct brcmstb_pwm*,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct brcmstb_pwm *VAR_5,
       unsigned int VAR_6, bool VAR_7)
{
 unsigned int VAR_8 = VAR_6 * VAR_0;
 u32 VAR_9;

 FUNC_2(&VAR_5->lock);
 VAR_9 = FUNC_0(VAR_5, VAR_4);

 if (VAR_7) {
  VAR_9 &= ~(VAR_1 << VAR_8);
  VAR_9 |= (VAR_3 | VAR_2) << VAR_8;
 } else {
  VAR_9 &= ~((VAR_3 | VAR_2) << VAR_8);
  VAR_9 |= VAR_1 << VAR_8;
 }

 FUNC_1(VAR_5, VAR_9, VAR_4);
 FUNC_3(&VAR_5->lock);
}
