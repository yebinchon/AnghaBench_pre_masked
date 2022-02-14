
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bh1770_chip {TYPE_1__* client; scalar_t__ prox_enable_count; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct bh1770_chip *VAR_1, int VAR_2)
{

 if (FUNC_1(&VAR_1->client->dev))
  return 0;


 if (VAR_1->prox_enable_count)
  VAR_2 = 0;

 return FUNC_0(VAR_1->client,
     VAR_0,
     VAR_2);
}
