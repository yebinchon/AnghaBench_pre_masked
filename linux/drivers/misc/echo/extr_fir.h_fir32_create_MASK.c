
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fir32_state_t {int taps; int curr_pos; int const* history; int const* coeffs; } ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int const* FUNC_0 (int,int,int ) ;

__attribute__((used)) static inline const int16_t *FUNC_1(struct fir32_state_t *VAR_1,
           const int32_t *VAR_2, int VAR_3)
{
 VAR_1->taps = VAR_3;
 VAR_1->curr_pos = VAR_3 - 1;
 VAR_1->coeffs = VAR_2;
 VAR_1->history = FUNC_0(VAR_3, sizeof(int16_t), VAR_0);
 return VAR_1->history;
}
