
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct eeprom_priv {int channel_plan; } ;
struct _adapter {struct eeprom_priv eeprompriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

uint FUNC_0(struct oid_par_priv
           *VAR_3)
{
 struct _adapter *VAR_4 = VAR_3->adapter_context;
 struct eeprom_priv *VAR_5 = &VAR_4->eeprompriv;

 if (VAR_3->type_of_oid != VAR_2)
  return VAR_0;
 VAR_5->channel_plan = *(u16 *)VAR_3->information_buf;
 return VAR_1;
}
