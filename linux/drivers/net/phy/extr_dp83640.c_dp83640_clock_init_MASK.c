
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {int dev; } ;
struct TYPE_2__ {int max_adj; int pin_config; int verify; int enable; int settime64; int gettime64; int adjtime; int adjfine; scalar_t__ pps; int n_pins; int n_per_out; int n_ext_ts; scalar_t__ n_alarm; int name; int owner; } ;
struct dp83640_clock {TYPE_1__ caps; int phylist; int clock_lock; int extreg_lock; struct mii_bus* bus; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct dp83640_clock *VAR_10, struct mii_bus *VAR_11)
{
 FUNC_0(&VAR_10->list);
 VAR_10->bus = VAR_11;
 FUNC_3(&VAR_10->extreg_lock);
 FUNC_3(&VAR_10->clock_lock);
 FUNC_0(&VAR_10->phylist);
 VAR_10->caps.owner = VAR_3;
 FUNC_4(VAR_10->caps.name, "dp83640 timer");
 VAR_10->caps.max_adj = 1953124;
 VAR_10->caps.n_alarm = 0;
 VAR_10->caps.n_ext_ts = VAR_1;
 VAR_10->caps.n_per_out = VAR_2;
 VAR_10->caps.n_pins = VAR_0;
 VAR_10->caps.pps = 0;
 VAR_10->caps.adjfine = VAR_4;
 VAR_10->caps.adjtime = VAR_5;
 VAR_10->caps.gettime64 = VAR_7;
 VAR_10->caps.settime64 = VAR_8;
 VAR_10->caps.enable = VAR_6;
 VAR_10->caps.verify = VAR_9;



 FUNC_1(VAR_10->caps.pin_config);



 FUNC_2(&VAR_11->dev);
}
