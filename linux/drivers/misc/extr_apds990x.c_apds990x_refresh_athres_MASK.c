
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apds990x_chip {int lux_thres_hi; int lux_thres_lo; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct apds990x_chip*,int ) ;
 int FUNC_1 (struct apds990x_chip*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct apds990x_chip *VAR_2)
{
 int VAR_3;

 if (FUNC_2(&VAR_2->client->dev))
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1,
   FUNC_0(VAR_2, VAR_2->lux_thres_lo));
 VAR_3 |= FUNC_1(VAR_2, VAR_0,
   FUNC_0(VAR_2, VAR_2->lux_thres_hi));

 return VAR_3;
}
