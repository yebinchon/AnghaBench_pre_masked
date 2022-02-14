
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spk_synth {int alive; } ;


 int FUNC_0 (struct spk_synth*) ;
 struct spk_synth* VAR_0 ;

int FUNC_1(struct spk_synth *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  return VAR_2;

 VAR_1->alive = 1;
 VAR_0 = VAR_1;

 return 0;
}
