
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_id_modify {int dummy; } ;
struct il_addsta_cmd {int add_immediate_ba_ssn; int remove_immediate_ba_tid; int add_immediate_ba_tid; int rate_n_flags; int station_flags_msk; int station_flags; int key; int sta; int mode; } ;
struct il4965_keyinfo {int dummy; } ;
struct il3945_addsta_cmd {int add_immediate_ba_ssn; int remove_immediate_ba_tid; int add_immediate_ba_tid; int rate_n_flags; int tid_disable_tx; int station_flags_msk; int station_flags; int key; int sta; int mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static u16
FUNC_2(const struct il_addsta_cmd *VAR_0, u8 * VAR_1)
{
 struct il3945_addsta_cmd *VAR_2 = (struct il3945_addsta_cmd *)VAR_1;
 VAR_2->mode = VAR_0->mode;
 FUNC_1(&VAR_2->sta, &VAR_0->sta, sizeof(struct sta_id_modify));
 FUNC_1(&VAR_2->key, &VAR_0->key, sizeof(struct il4965_keyinfo));
 VAR_2->station_flags = VAR_0->station_flags;
 VAR_2->station_flags_msk = VAR_0->station_flags_msk;
 VAR_2->tid_disable_tx = FUNC_0(0);
 VAR_2->rate_n_flags = VAR_0->rate_n_flags;
 VAR_2->add_immediate_ba_tid = VAR_0->add_immediate_ba_tid;
 VAR_2->remove_immediate_ba_tid = VAR_0->remove_immediate_ba_tid;
 VAR_2->add_immediate_ba_ssn = VAR_0->add_immediate_ba_ssn;

 return (u16) sizeof(struct il3945_addsta_cmd);
}
