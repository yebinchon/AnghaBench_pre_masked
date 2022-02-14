
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_wep_key {int key_index; scalar_t__ key_size; int key; scalar_t__ seq_num; int cmd_id; } ;
struct ipw_priv {TYPE_2__* ieee; } ;
typedef int key ;
struct TYPE_3__ {int flags; int * keys; scalar_t__* key_sizes; } ;
struct TYPE_4__ {TYPE_1__ sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_priv*,int ,int,struct ipw_wep_key*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ipw_priv *VAR_2, int VAR_3)
{
 struct ipw_wep_key VAR_4;
 int VAR_5;

 VAR_4.cmd_id = VAR_0;
 VAR_4.seq_num = 0;



 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_4.key_index = VAR_5 | VAR_3;
  if (!(VAR_2->ieee->sec.flags & (1 << VAR_5))) {
   VAR_4.key_size = 0;
   continue;
  }

  VAR_4.key_size = VAR_2->ieee->sec.key_sizes[VAR_5];
  FUNC_1(VAR_4.key, VAR_2->ieee->sec.keys[VAR_5], VAR_4.key_size);

  FUNC_0(VAR_2, VAR_1, sizeof(VAR_4), &VAR_4);
 }
}
