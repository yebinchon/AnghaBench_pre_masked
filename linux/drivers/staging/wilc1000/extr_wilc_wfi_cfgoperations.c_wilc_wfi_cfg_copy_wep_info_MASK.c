
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wilc_priv {int * wep_key; int * wep_key_len; } ;
struct key_params {int key_len; int key; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct wilc_priv *VAR_0,
           u8 VAR_1,
           struct key_params *VAR_2)
{
 VAR_0->wep_key_len[VAR_1] = VAR_2->key_len;
 FUNC_0(VAR_0->wep_key[VAR_1], VAR_2->key, VAR_2->key_len);
}
