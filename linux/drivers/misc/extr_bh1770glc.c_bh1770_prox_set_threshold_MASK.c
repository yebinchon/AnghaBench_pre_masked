
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bh1770_chip {TYPE_1__* client; int prox_threshold_hw; int prox_threshold; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bh1770_chip*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct bh1770_chip *VAR_1)
{
 u8 VAR_2 = 0;


 if (FUNC_2(&VAR_1->client->dev))
  return 0;

 VAR_2 = FUNC_0(VAR_1, VAR_1->prox_threshold);
 VAR_1->prox_threshold_hw = VAR_2;

 return FUNC_1(VAR_1->client, VAR_0,
     VAR_2);
}
