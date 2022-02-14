
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int fw_state; } ;
typedef int sint ;



__attribute__((used)) static inline u8 FUNC_0(struct mlme_priv *VAR_0, sint VAR_1)
{
 if (VAR_0->fw_state & VAR_1)
  return 1;
 return 0;
}
