
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6105x {TYPE_1__* client; } ;
struct mfd_cell {int pdata_size; struct tps6105x* platform_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct mfd_cell*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct tps6105x *VAR_1,
          struct mfd_cell *VAR_2)
{
 VAR_2->platform_data = VAR_1;
 VAR_2->pdata_size = sizeof(*VAR_1);

 return FUNC_0(&VAR_1->client->dev,
          VAR_0, VAR_2, 1, ((void*)0), 0, ((void*)0));
}
