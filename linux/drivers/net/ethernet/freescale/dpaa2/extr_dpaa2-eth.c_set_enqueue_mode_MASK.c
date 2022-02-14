
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int enqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dpaa2_eth_priv*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct dpaa2_eth_priv *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_0,
       VAR_1) < 0)
  VAR_4->enqueue = VAR_3;
 else
  VAR_4->enqueue = VAR_2;
}
