
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct clk_init_data* init; } ;
struct TYPE_8__ {TYPE_5__ hw; int * table; int * lock; scalar_t__ flags; int mask; int shift; scalar_t__ reg; } ;
struct meson_pwm_channel {int clk_parent; int clk; TYPE_3__ mux; } ;
struct TYPE_6__ {unsigned int npwm; struct device* dev; } ;
struct meson_pwm {int lock; scalar_t__ base; TYPE_2__* data; struct meson_pwm_channel* channels; TYPE_1__ chip; } ;
struct device {int dummy; } ;
struct clk_init_data {char* name; int num_parents; int parent_names; scalar_t__ flags; int * ops; } ;
typedef int name ;
struct TYPE_9__ {int clk_sel_shift; } ;
struct TYPE_7__ {int num_parents; int parent_names; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,TYPE_5__*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_6 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_7(struct meson_pwm *VAR_4)
{
 struct device *VAR_5 = VAR_4->chip.dev;
 struct clk_init_data VAR_6;
 unsigned int VAR_7;
 char VAR_8[255];
 int VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_4->chip.npwm; VAR_7++) {
  struct meson_pwm_channel *VAR_10 = &VAR_4->channels[VAR_7];

  FUNC_6(VAR_8, sizeof(VAR_8), "%s#mux%u", FUNC_3(VAR_5), VAR_7);

  VAR_6.name = VAR_8;
  VAR_6.ops = &VAR_2;
  VAR_6.flags = 0;
  VAR_6.parent_names = VAR_4->data->parent_names;
  VAR_6.num_parents = VAR_4->data->num_parents;

  VAR_10->mux.reg = VAR_4->base + VAR_1;
  VAR_10->mux.shift =
    VAR_3[VAR_7].clk_sel_shift;
  VAR_10->mux.mask = VAR_0;
  VAR_10->mux.flags = 0;
  VAR_10->mux.lock = &VAR_4->lock;
  VAR_10->mux.table = ((void*)0);
  VAR_10->mux.hw.init = &VAR_6;

  VAR_10->clk = FUNC_5(VAR_5, &VAR_10->mux.hw);
  if (FUNC_0(VAR_10->clk)) {
   VAR_9 = FUNC_1(VAR_10->clk);
   FUNC_2(VAR_5, "failed to register %s: %d\n", VAR_8, VAR_9);
   return VAR_9;
  }

  FUNC_6(VAR_8, sizeof(VAR_8), "clkin%u", VAR_7);

  VAR_10->clk_parent = FUNC_4(VAR_5, VAR_8);
  if (FUNC_0(VAR_10->clk_parent))
   return FUNC_1(VAR_10->clk_parent);
 }

 return 0;
}
