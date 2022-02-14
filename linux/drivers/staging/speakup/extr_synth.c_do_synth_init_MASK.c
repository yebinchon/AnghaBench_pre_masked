
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct var_t {scalar_t__ var_id; } ;
struct TYPE_7__ {scalar_t__ name; } ;
struct spk_synth {scalar_t__ checkval; scalar_t__ (* probe ) (struct spk_synth*) ;int flags; TYPE_3__ attributes; int long_name; struct var_t* vars; int init; int full; int jiffies; int trigger; int delay; int name; scalar_t__ alive; } ;
struct TYPE_5__ {int default_val; int value; } ;
struct TYPE_6__ {TYPE_1__ n; } ;
struct TYPE_8__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct var_t*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct spk_synth*) ;
 struct spk_synth* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 TYPE_4__* VAR_11 ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct spk_synth *VAR_12)
{
 struct var_t *VAR_13;

 FUNC_4();
 if (VAR_12->checkval != VAR_4)
  return -VAR_0;
 VAR_9 = VAR_12;
 VAR_9->alive = 0;
 FUNC_0("synth probe\n");
 if (VAR_9->probe(VAR_9) < 0) {
  FUNC_0("%s: device probe failed\n", VAR_12->name);
  VAR_9 = ((void*)0);
  return -VAR_1;
 }
 VAR_11[0].u.n.value =
  VAR_11[0].u.n.default_val = VAR_9->delay;
 VAR_11[1].u.n.value =
  VAR_11[1].u.n.default_val = VAR_9->trigger;
 VAR_11[2].u.n.value =
  VAR_11[2].u.n.default_val = VAR_9->jiffies;
 VAR_11[3].u.n.value =
  VAR_11[3].u.n.default_val = VAR_9->full;
 FUNC_3("%s", VAR_9->init);
 for (VAR_13 = VAR_9->vars;
  (VAR_13->var_id >= 0) && (VAR_13->var_id < VAR_3); VAR_13++)
  FUNC_1(VAR_13);
 if (!VAR_8)
  FUNC_3("%s found\n", VAR_9->long_name);
 if (VAR_9->attributes.name &&
     FUNC_5(VAR_6, &VAR_9->attributes) < 0)
  return -VAR_2;
 VAR_10 = VAR_9->flags;
 FUNC_6(&VAR_5);
 if (VAR_7)
  FUNC_7(VAR_7);
 return 0;
}
