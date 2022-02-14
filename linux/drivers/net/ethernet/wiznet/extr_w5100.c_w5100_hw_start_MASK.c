
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w5100_priv {TYPE_1__* ops; int promisc; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct w5100_priv*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct w5100_priv*,int ) ;
 int FUNC_2 (struct w5100_priv*) ;
 int FUNC_3 (struct w5100_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct w5100_priv *VAR_5)
{
 u8 VAR_6 = VAR_1;

 if (!VAR_5->promisc) {
  if (VAR_5->ops->chip_id == VAR_3)
   VAR_6 |= VAR_4;
  else
   VAR_6 |= VAR_2;
 }

 FUNC_3(VAR_5, FUNC_0(VAR_5), VAR_6);
 FUNC_1(VAR_5, VAR_0);
 FUNC_2(VAR_5);
}
