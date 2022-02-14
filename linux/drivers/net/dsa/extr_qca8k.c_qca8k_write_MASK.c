
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qca8k_priv {TYPE_1__* bus; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_5(struct qca8k_priv *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u16 VAR_4, VAR_5, VAR_6;

 FUNC_4(VAR_2, &VAR_4, &VAR_5, &VAR_6);

 FUNC_0(&VAR_1->bus->mdio_lock, VAR_0);

 FUNC_3(VAR_1->bus, VAR_6);
 FUNC_2(VAR_1->bus, 0x10 | VAR_5, VAR_4, VAR_3);

 FUNC_1(&VAR_1->bus->mdio_lock);
}
