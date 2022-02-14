
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_ch_state {int idx2; int request_counter; } ;
struct dim_channel {int addr; struct int_ch_state state; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(struct dim_channel *VAR_0)
{
 struct int_ch_state *const VAR_1 = &VAR_0->state;

 if (!FUNC_0(VAR_0->addr, VAR_1->idx2))
  return 0;

 VAR_1->idx2 ^= 1;
 VAR_1->request_counter++;
 return 1;
}
