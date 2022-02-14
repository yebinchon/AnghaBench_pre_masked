
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_emac_priv {int txbd_dirty; int txbd_curr; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct arc_emac_priv *VAR_1)
{
 return (VAR_1->txbd_dirty + VAR_0 - VAR_1->txbd_curr - 1) % VAR_0;
}
