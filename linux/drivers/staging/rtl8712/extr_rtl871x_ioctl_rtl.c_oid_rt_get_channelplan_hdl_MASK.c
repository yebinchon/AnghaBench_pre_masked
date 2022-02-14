
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ information_buf; int information_buf_len; int * bytes_rw; struct _adapter* adapter_context; } ;
struct eeprom_priv {int channel_plan; } ;
struct _adapter {struct eeprom_priv eeprompriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint FUNC_0(struct oid_par_priv *VAR_3)
{
 struct _adapter *VAR_4 = VAR_3->adapter_context;
 struct eeprom_priv *VAR_5 = &VAR_4->eeprompriv;

 if (VAR_3->type_of_oid != VAR_0)
  return VAR_1;
 *VAR_3->bytes_rw = VAR_3->information_buf_len;
 *(u16 *)VAR_3->information_buf = VAR_5->channel_plan;
 return VAR_2;
}
