
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apds990x_chip {int prox_thres; scalar_t__ prox_continuous_mode; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct apds990x_chip*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct apds990x_chip *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;


 if (FUNC_1(&VAR_4->client->dev))
  return 0;

 if (VAR_5 < VAR_4->prox_thres) {
  VAR_7 = 0;
  VAR_8 = VAR_4->prox_thres;
 } else {
  VAR_7 = VAR_4->prox_thres - VAR_2;
  if (VAR_4->prox_continuous_mode)
   VAR_8 = VAR_4->prox_thres;
  else
   VAR_8 = VAR_3;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_7);
 VAR_6 |= FUNC_0(VAR_4, VAR_0, VAR_8);
 return VAR_6;
}
