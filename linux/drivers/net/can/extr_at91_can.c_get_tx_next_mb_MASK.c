
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_priv {int tx_next; } ;


 unsigned int FUNC_0 (struct at91_priv const*) ;
 int FUNC_1 (struct at91_priv const*) ;

__attribute__((used)) static inline unsigned int FUNC_2(const struct at91_priv *VAR_0)
{
 return (VAR_0->tx_next & FUNC_1(VAR_0)) + FUNC_0(VAR_0);
}
