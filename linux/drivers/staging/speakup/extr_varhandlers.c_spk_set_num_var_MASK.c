
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int low; int high; int default_val; int multiplier; char* synth_fmt; int* out_str; scalar_t__ offset; } ;
struct TYPE_5__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct st_var_header {int* p_val; scalar_t__ var_type; scalar_t__ var_id; struct var_t* data; } ;
struct TYPE_6__ {int (* synth_adjust ) (struct st_var_header*) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 char* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct st_var_header*) ;
 TYPE_3__* VAR_9 ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(int VAR_10, struct st_var_header *VAR_11, int VAR_12)
{
 int VAR_13;
 int *VAR_14 = VAR_11->p_val;
 char VAR_15[32];
 char *VAR_16;
 struct var_t *VAR_17 = VAR_11->data;

 if (!VAR_17)
  return -VAR_0;

 VAR_13 = VAR_17->u.n.value;
 switch (VAR_12) {
 case 129:
  if (VAR_10 < VAR_17->u.n.low || VAR_10 > VAR_17->u.n.high)
   return -VAR_1;
  VAR_17->u.n.default_val = VAR_10;
  return 0;
 case 131:
  VAR_13 = VAR_17->u.n.default_val;
  break;
 case 128:
  VAR_13 = VAR_10;
  break;
 case 130:
  VAR_13 += VAR_10;
  break;
 case 132:
  VAR_13 -= VAR_10;
  break;
 }

 if (VAR_13 < VAR_17->u.n.low || VAR_13 > VAR_17->u.n.high)
  return -VAR_1;

 VAR_17->u.n.value = VAR_13;
 if (VAR_11->var_type == VAR_5 && VAR_14) {
  *VAR_14 = FUNC_0(VAR_13);
  return 0;
 }
 if (VAR_14)
  *VAR_14 = VAR_13;
 if (VAR_11->var_id == VAR_4) {
  VAR_7 = VAR_8[VAR_13];
  return 0;
 }
 if (VAR_17->u.n.multiplier != 0)
  VAR_13 *= VAR_17->u.n.multiplier;
 VAR_13 += VAR_17->u.n.offset;
 if (VAR_11->var_id < VAR_2 || !VAR_9)
  return 0;
 if (VAR_9->synth_adjust)
  return VAR_9->synth_adjust(VAR_11);

 if (!VAR_17->u.n.synth_fmt)
  return 0;
 if (VAR_11->var_id == VAR_3)
  VAR_16 = VAR_6;
 else
  VAR_16 = VAR_15;
 if (!VAR_17->u.n.out_str)
  FUNC_1(VAR_16, VAR_17->u.n.synth_fmt, (int)VAR_13);
 else
  FUNC_1(VAR_16, VAR_17->u.n.synth_fmt,
   VAR_17->u.n.out_str[VAR_13]);
 FUNC_3("%s", VAR_16);
 return 0;
}
