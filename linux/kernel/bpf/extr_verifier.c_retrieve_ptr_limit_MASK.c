
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ value; } ;
struct bpf_reg_state {int type; TYPE_2__* map_ptr; scalar_t__ off; scalar_t__ smin_value; scalar_t__ umax_value; TYPE_1__ var_off; } ;
struct TYPE_4__ {scalar_t__ value_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



__attribute__((used)) static int FUNC_0(const struct bpf_reg_state *VAR_4,
         u32 *VAR_5, u8 VAR_6, bool VAR_7)
{
 bool VAR_8 = (VAR_6 == VAR_0 && VAR_7) ||
       (VAR_6 == VAR_1 && !VAR_7);
 u32 VAR_9;

 switch (VAR_4->type) {
 case 128:



  VAR_9 = VAR_4->off + VAR_4->var_off.value;
  if (VAR_8)
   *VAR_5 = VAR_3 + VAR_9;
  else
   *VAR_5 = -VAR_9;
  return 0;
 case 129:
  if (VAR_8) {
   *VAR_5 = VAR_4->umax_value + VAR_4->off;
  } else {
   VAR_9 = VAR_4->smin_value + VAR_4->off;
   *VAR_5 = VAR_4->map_ptr->value_size - VAR_9;
  }
  return 0;
 default:
  return -VAR_2;
 }
}
