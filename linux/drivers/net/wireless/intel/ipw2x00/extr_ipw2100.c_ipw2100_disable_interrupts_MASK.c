
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int status; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ipw2100_priv *VAR_2)
{
 if (!(VAR_2->status & VAR_1))
  return;
 VAR_2->status &= ~VAR_1;
 FUNC_0(VAR_2->net_dev, VAR_0, 0x0);
}
