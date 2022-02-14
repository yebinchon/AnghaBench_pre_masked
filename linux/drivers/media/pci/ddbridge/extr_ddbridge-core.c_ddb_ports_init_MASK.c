
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ddb_regmap {int dummy; } ;
struct ddb_port {size_t nr; size_t lnr; size_t pnr; int gap; scalar_t__ class; scalar_t__ type; char* name; int i2c; TYPE_1__* dvb; int i2c_gate_lock; int obr; struct ddb* dev; } ;
struct ddb_info {size_t port_num; scalar_t__ type; struct ddb_regmap* regmap; } ;
struct ddb {size_t port_num; TYPE_2__* link; int dev; struct ddb_port* port; int * adap; } ;
struct TYPE_4__ {struct ddb_info* info; } ;
struct TYPE_3__ {int * adap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;





 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ddb_port*,int,int,int) ;
 int FUNC_1 (struct ddb_port*,size_t) ;
 int FUNC_2 (struct ddb_port*) ;
 int FUNC_3 (struct ddb_port*) ;
 int FUNC_4 (struct ddb_port*) ;
 int FUNC_5 (int ,char*,size_t,size_t,size_t,size_t,char*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ddb *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 struct ddb_port *VAR_10;
 const struct ddb_info *VAR_11;
 const struct ddb_regmap *VAR_12;

 for (VAR_9 = VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_11 = VAR_6->link[VAR_8].info;
  if (!VAR_11)
   continue;
  VAR_12 = VAR_11->regmap;
  if (!VAR_12)
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_11->port_num; VAR_7++, VAR_9++) {
   VAR_10 = &VAR_6->port[VAR_9];
   VAR_10->dev = VAR_6;
   VAR_10->nr = VAR_7;
   VAR_10->lnr = VAR_8;
   VAR_10->pnr = VAR_9;
   VAR_10->gap = 0xffffffff;
   VAR_10->obr = VAR_5;
   FUNC_6(&VAR_10->i2c_gate_lock);

   if (!FUNC_2(VAR_10)) {
    if (VAR_11->type == 130)
     FUNC_3(VAR_10);
   }

   FUNC_4(VAR_10);

   VAR_10->dvb[0].adap = &VAR_6->adap[2 * VAR_9];
   VAR_10->dvb[1].adap = &VAR_6->adap[2 * VAR_9 + 1];

   if (VAR_10->class == VAR_4 && VAR_7 && VAR_9 &&
       VAR_6->port[VAR_9 - 1].type == VAR_0) {
    VAR_10->class = VAR_3;
    VAR_10->type = VAR_1;
    VAR_10->name = "DuoFlex CI_B";
    VAR_10->i2c = VAR_6->port[VAR_9 - 1].i2c;
   }

   FUNC_5(VAR_6->dev, "Port %u: Link %u, Link Port %u (TAB %u): %s\n",
     VAR_10->pnr, VAR_10->lnr, VAR_10->nr, VAR_10->nr + 1,
     VAR_10->name);

   if (VAR_10->class == VAR_3 &&
       VAR_10->type == VAR_0) {
    FUNC_0(VAR_10, 2 * VAR_7, 0, 2 * VAR_7);
    FUNC_1(VAR_10, VAR_7);
    continue;
   }

   if (VAR_10->class == VAR_3 &&
       VAR_10->type == VAR_1) {
    FUNC_0(VAR_10, 2 * VAR_7 - 1, 0, 2 * VAR_7 - 1);
    FUNC_1(VAR_10, VAR_7);
    continue;
   }

   if (VAR_10->class == VAR_4)
    continue;

   switch (VAR_6->link[VAR_8].info->type) {
   case 131:
    if (VAR_7 >= 2) {
     FUNC_0(VAR_10, 2 + VAR_7, 0, 2 + VAR_7);
     FUNC_0(VAR_10, 4 + VAR_7, 1, 4 + VAR_7);
     FUNC_1(VAR_10, VAR_7);
     break;
    }
   case 132:
    FUNC_0(VAR_10, 2 * VAR_7, 0, 2 * VAR_7);
    FUNC_0(VAR_10, 2 * VAR_7 + 1, 1, 2 * VAR_7 + 1);
    FUNC_1(VAR_10, VAR_7);
    break;
   case 130:
   case 129:
   case 128:
    FUNC_0(VAR_10, 2 * VAR_7, 0, 2 * VAR_9);
    FUNC_0(VAR_10, 2 * VAR_7 + 1, 1, 2 * VAR_9 + 1);
    break;
   default:
    break;
   }
  }
 }
 VAR_6->port_num = VAR_9;
}
