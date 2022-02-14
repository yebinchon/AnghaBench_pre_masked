
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ vendor_id; int enabled; int upstream_port_number; } ;
struct tb_switch {TYPE_1__ config; struct tb* tb; } ;
struct tb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb*,char*,int ,int ,int ) ;
 int FUNC_1 (struct tb_switch*) ;
 int FUNC_2 (struct tb_switch*,int) ;
 int FUNC_3 (struct tb_switch*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tb_switch*,char*,scalar_t__) ;
 int FUNC_6 (struct tb_switch*,int *,int ,int,int) ;

int FUNC_7(struct tb_switch *VAR_2)
{
 struct tb *VAR_3 = VAR_2->tb;
 u64 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 FUNC_0(VAR_3, "initializing Switch at %#llx (depth: %d, up port: %d)\n",
        VAR_4, FUNC_4(VAR_4), VAR_2->config.upstream_port_number);

 if (VAR_2->config.vendor_id != VAR_0)
  FUNC_5(VAR_2, "unknown switch vendor id %#x\n",
      VAR_2->config.vendor_id);

 VAR_2->config.enabled = 1;


 VAR_5 = FUNC_6(VAR_2, 1 + (u32 *)&VAR_2->config, VAR_1, 1, 3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_2, 1);
}
