
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_mpp_state {int dummy; } ;
struct pmic_mpp_pad {int function; int dtest; int out_value; scalar_t__ paired; int input_enabled; int output_enabled; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;

 int FUNC_0 (struct pmic_mpp_state*,struct pmic_mpp_pad*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pmic_mpp_state *VAR_13,
       struct pmic_mpp_pad *VAR_14)
{
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;

 switch (VAR_14->function) {
 case 130:
  if (VAR_14->input_enabled && VAR_14->output_enabled)
   VAR_15 = VAR_0;
  else if (VAR_14->input_enabled)
   VAR_15 = VAR_1;
  else
   VAR_15 = VAR_2;
  break;
 case 129:
  if (VAR_14->input_enabled && VAR_14->output_enabled)
   VAR_15 = VAR_4;
  else if (VAR_14->input_enabled)
   VAR_15 = VAR_5;
  else
   VAR_15 = VAR_6;
  break;
 case 128:
 default:
  VAR_15 = VAR_3;
  break;
 }

 if (VAR_14->dtest)
  VAR_16 = VAR_10 + VAR_14->dtest - 1;
 else if (VAR_14->paired)
  VAR_16 = VAR_12;
 else
  VAR_16 = VAR_11;

 VAR_18 = !!VAR_14->out_value;

 VAR_17 = VAR_15 << VAR_8 |
       VAR_16 << VAR_9 |
       VAR_18;

 return FUNC_0(VAR_13, VAR_14, VAR_7, VAR_17);
}
