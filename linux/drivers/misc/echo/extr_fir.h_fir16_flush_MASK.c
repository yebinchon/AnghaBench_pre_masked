
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fir16_state_t {int taps; int history; } ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct fir16_state_t *VAR_0)
{
 FUNC_0(VAR_0->history, 0, VAR_0->taps * sizeof(int16_t));
}
