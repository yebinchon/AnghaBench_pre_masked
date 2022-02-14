
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etherh_priv {unsigned char ctrl; int ctrl_port; } ;


 int FUNC_0 (unsigned char,int ) ;

__attribute__((used)) static inline void FUNC_1(struct etherh_priv *VAR_0, unsigned char VAR_1)
{
 unsigned char VAR_2 = VAR_0->ctrl & ~VAR_1;
 VAR_0->ctrl = VAR_2;
 FUNC_0(VAR_2, VAR_0->ctrl_port);
}
