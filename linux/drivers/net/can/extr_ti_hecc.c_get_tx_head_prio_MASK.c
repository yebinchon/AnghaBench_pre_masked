
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_hecc_priv {int tx_head; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ti_hecc_priv *VAR_2)
{
 return (VAR_2->tx_head >> VAR_0) & VAR_1;
}
