
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_tgi_tx_key {int key_id; int security_type; void** tx_counter; scalar_t__ flags; scalar_t__ station_index; int key; } ;
struct ipw_priv {TYPE_2__* ieee; } ;
typedef int key ;
struct TYPE_3__ {int flags; int * keys; } ;
struct TYPE_4__ {TYPE_1__ sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ipw_priv*,int ,int,struct ipw_tgi_tx_key*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_2, int VAR_3, int VAR_4)
{
 struct ipw_tgi_tx_key VAR_5;

 if (!(VAR_2->ieee->sec.flags & (1 << VAR_4)))
  return;

 VAR_5.key_id = VAR_4;
 FUNC_2(VAR_5.key, VAR_2->ieee->sec.keys[VAR_4], VAR_1);
 VAR_5.security_type = VAR_3;
 VAR_5.station_index = 0;
 VAR_5.flags = 0;

 VAR_5.tx_counter[0] = FUNC_0(0);
 VAR_5.tx_counter[1] = FUNC_0(0);

 FUNC_1(VAR_2, VAR_0, sizeof(VAR_5), &VAR_5);
}
