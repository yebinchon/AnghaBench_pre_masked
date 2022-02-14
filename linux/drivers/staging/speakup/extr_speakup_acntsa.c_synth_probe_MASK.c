
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spk_synth {int alive; int (* synth_immediate ) (struct spk_synth*,char*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spk_synth*) ;
 int FUNC_2 (struct spk_synth*,char*) ;

__attribute__((used)) static int FUNC_3(struct spk_synth *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == 0) {
  VAR_0->synth_immediate(VAR_0, "\033=R\r");
  FUNC_0(100);
 }
 VAR_0->alive = !VAR_1;
 return VAR_1;
}
