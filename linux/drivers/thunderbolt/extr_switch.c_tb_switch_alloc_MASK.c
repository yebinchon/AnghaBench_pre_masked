
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int groups; int * type; int * bus; struct device* parent; } ;
struct TYPE_5__ {int upstream_port_number; int depth; int max_port_number; scalar_t__ enabled; int route_lo; int route_hi; } ;
struct tb_switch {int port; int cap_plug_events; int cap_lc; int authorized; struct tb_switch* ports; TYPE_3__ dev; int generation; struct tb_switch* sw; TYPE_1__ config; struct tb* tb; } ;
struct tb {int index; int ctl; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tb_switch* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 struct tb_switch* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct tb_switch*) ;
 struct tb_switch* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int ,int ,int ,int) ;
 int FUNC_9 (struct tb*,char*) ;
 int FUNC_10 (struct tb*,TYPE_1__*) ;
 int FUNC_11 (struct tb_switch*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct tb_switch*,char*) ;
 int FUNC_14 (struct tb_switch*,int ) ;
 int FUNC_15 (struct tb_switch*) ;
 int VAR_9 ;
 int FUNC_16 (int ) ;

struct tb_switch *FUNC_17(struct tb *VAR_10, struct device *VAR_11,
      u64 VAR_12)
{
 struct tb_switch *VAR_13;
 int VAR_14;
 int VAR_15, VAR_16, VAR_17;


 VAR_17 = FUNC_12(VAR_12);
 if (VAR_17 > VAR_4)
  return FUNC_0(-VAR_0);

 VAR_14 = FUNC_7(VAR_10->ctl, VAR_12);
 if (VAR_14 < 0)
  return FUNC_0(VAR_14);

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_13->tb = VAR_10;
 VAR_16 = FUNC_8(VAR_10->ctl, &VAR_13->config, VAR_12, 0, VAR_3, 0, 5);
 if (VAR_16)
  goto err_free_sw_ports;

 FUNC_9(VAR_10, "current switch config:\n");
 FUNC_10(VAR_10, &VAR_13->config);


 VAR_13->config.upstream_port_number = VAR_14;
 VAR_13->config.depth = VAR_17;
 VAR_13->config.route_hi = FUNC_16(VAR_12);
 VAR_13->config.route_lo = FUNC_6(VAR_12);
 VAR_13->config.enabled = 0;


 VAR_13->ports = FUNC_3(VAR_13->config.max_port_number + 1, sizeof(*VAR_13->ports),
    VAR_2);
 if (!VAR_13->ports) {
  VAR_16 = -VAR_1;
  goto err_free_sw_ports;
 }

 for (VAR_15 = 0; VAR_15 <= VAR_13->config.max_port_number; VAR_15++) {

  VAR_13->ports[VAR_15].sw = VAR_13;
  VAR_13->ports[VAR_15].port = VAR_15;
 }

 VAR_13->generation = FUNC_15(VAR_13);

 VAR_16 = FUNC_14(VAR_13, VAR_6);
 if (VAR_16 < 0) {
  FUNC_13(VAR_13, "cannot find TB_VSE_CAP_PLUG_EVENTS aborting\n");
  goto err_free_sw_ports;
 }
 VAR_13->cap_plug_events = VAR_16;

 VAR_16 = FUNC_14(VAR_13, VAR_5);
 if (VAR_16 > 0)
  VAR_13->cap_lc = VAR_16;


 if (!VAR_12)
  VAR_13->authorized = 1;

 FUNC_2(&VAR_13->dev);
 VAR_13->dev.parent = VAR_11;
 VAR_13->dev.bus = &VAR_8;
 VAR_13->dev.type = &VAR_9;
 VAR_13->dev.groups = VAR_7;
 FUNC_1(&VAR_13->dev, "%u-%llx", VAR_10->index, FUNC_11(VAR_13));

 return VAR_13;

err_free_sw_ports:
 FUNC_4(VAR_13->ports);
 FUNC_4(VAR_13);

 return FUNC_0(VAR_16);
}
