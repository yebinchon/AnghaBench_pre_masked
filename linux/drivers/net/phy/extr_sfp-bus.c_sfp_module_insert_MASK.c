
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp_upstream_ops {int (* module_insert ) (int ,struct sfp_eeprom_id const*) ;} ;
struct sfp_eeprom_id {int dummy; } ;
struct sfp_bus {int upstream; } ;


 struct sfp_upstream_ops* FUNC_0 (struct sfp_bus*) ;
 int FUNC_1 (int ,struct sfp_eeprom_id const*) ;

int FUNC_2(struct sfp_bus *VAR_0, const struct sfp_eeprom_id *VAR_1)
{
 const struct sfp_upstream_ops *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 if (VAR_2 && VAR_2->module_insert)
  VAR_3 = VAR_2->module_insert(VAR_0->upstream, VAR_1);

 return VAR_3;
}
