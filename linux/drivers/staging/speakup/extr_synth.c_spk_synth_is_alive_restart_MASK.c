
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spk_synth {int alive; int long_name; int init; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct spk_synth*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct spk_synth *VAR_0)
{
 if (VAR_0->alive)
  return 1;
 if (FUNC_1(VAR_0) > 0) {

  VAR_0->alive = 1;
  FUNC_2("%s", VAR_0->init);
  return 2;
 }
 FUNC_0("%s: can't restart synth\n", VAR_0->long_name);
 return 0;
}
