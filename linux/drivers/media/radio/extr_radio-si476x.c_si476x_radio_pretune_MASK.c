
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_tune_freq_args {int zifsr; int hd; void* freq; int antcap; int smoothmetrics; int tunemode; int injside; } ;
struct si476x_radio {int core; TYPE_1__* ops; } ;
typedef enum si476x_func { ____Placeholder_si476x_func } si476x_func ;
struct TYPE_2__ {int (* tune_freq ) (int ,struct si476x_tune_freq_args*) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct si476x_tune_freq_args*) ;
 int FUNC_2 (int ,struct si476x_tune_freq_args*) ;
 void* FUNC_3 (int ,double) ;

__attribute__((used)) static int FUNC_4(struct si476x_radio *VAR_5,
    enum si476x_func VAR_6)
{
 int VAR_7;

 struct si476x_tune_freq_args VAR_8 = {
  .zifsr = 0,
  .hd = 0,
  .injside = VAR_2,
  .tunemode = VAR_4,
  .smoothmetrics = VAR_3,
  .antcap = 0,
 };

 switch (VAR_6) {
 case 128:
  VAR_8.freq = FUNC_3(VAR_5->core,
        92 * VAR_1);
  VAR_7 = VAR_5->ops->tune_freq(VAR_5->core, &VAR_8);
  break;
 case 129:
  VAR_8.freq = FUNC_3(VAR_5->core,
        0.6 * VAR_1);
  VAR_7 = VAR_5->ops->tune_freq(VAR_5->core, &VAR_8);
  break;
 default:
  FUNC_0(1, "Unexpected tuner function value\n");
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
