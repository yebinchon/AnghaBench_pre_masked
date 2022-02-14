
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_core {TYPE_1__* client; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct regmap* FUNC_0 (int *,int *,struct si476x_core*,int *) ;
 int VAR_0 ;

struct regmap *FUNC_1(struct si476x_core *VAR_1)
{
 return FUNC_0(&VAR_1->client->dev, ((void*)0),
    VAR_1, &VAR_0);
}
