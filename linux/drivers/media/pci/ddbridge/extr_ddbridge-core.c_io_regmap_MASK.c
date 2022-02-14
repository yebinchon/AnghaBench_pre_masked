
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddb_regmap {int dummy; } ;
struct ddb_io {TYPE_3__* port; } ;
struct ddb_info {struct ddb_regmap const* regmap; } ;
struct TYPE_6__ {size_t lnr; TYPE_2__* dev; } ;
struct TYPE_5__ {TYPE_1__* link; } ;
struct TYPE_4__ {struct ddb_info* info; } ;



__attribute__((used)) static const struct ddb_regmap *FUNC_0(struct ddb_io *VAR_0, int VAR_1)
{
 const struct ddb_info *VAR_2;

 if (VAR_1)
  VAR_2 = VAR_0->port->dev->link[VAR_0->port->lnr].info;
 else
  VAR_2 = VAR_0->port->dev->link[0].info;

 if (!VAR_2)
  return ((void*)0);

 return VAR_2->regmap;
}
