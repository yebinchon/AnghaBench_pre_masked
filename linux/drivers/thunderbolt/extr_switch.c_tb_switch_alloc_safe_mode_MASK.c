
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int groups; int * type; int * bus; struct device* parent; } ;
struct TYPE_4__ {int route_lo; int route_hi; int depth; } ;
struct tb_switch {int safe_mode; TYPE_2__ dev; TYPE_1__ config; struct tb* tb; } ;
struct tb {int index; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct tb_switch* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 struct tb_switch* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct tb_switch*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

struct tb_switch *
FUNC_8(struct tb *VAR_5, struct device *VAR_6, u64 VAR_7)
{
 struct tb_switch *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->tb = VAR_5;
 VAR_8->config.depth = FUNC_6(VAR_7);
 VAR_8->config.route_hi = FUNC_7(VAR_7);
 VAR_8->config.route_lo = FUNC_4(VAR_7);
 VAR_8->safe_mode = 1;

 FUNC_2(&VAR_8->dev);
 VAR_8->dev.parent = VAR_6;
 VAR_8->dev.bus = &VAR_3;
 VAR_8->dev.type = &VAR_4;
 VAR_8->dev.groups = VAR_2;
 FUNC_1(&VAR_8->dev, "%u-%llx", VAR_5->index, FUNC_5(VAR_8));

 return VAR_8;
}
