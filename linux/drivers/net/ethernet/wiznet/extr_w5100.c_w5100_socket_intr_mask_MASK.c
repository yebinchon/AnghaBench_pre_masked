
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct w5100_priv {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct w5100_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct w5100_priv *VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 if (VAR_3->ops->chip_id == VAR_1)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_0;

 FUNC_0(VAR_3, VAR_5, VAR_4);
}
