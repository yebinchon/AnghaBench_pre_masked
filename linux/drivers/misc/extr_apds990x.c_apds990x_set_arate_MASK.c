
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apds990x_chip {int lux_persistence; int arate; int prox_persistence; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int VAR_3 ;
 int FUNC_1 (struct apds990x_chip*,int ,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct apds990x_chip *VAR_6, int VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
  if (VAR_7 >= VAR_5[VAR_8])
   break;

 if (VAR_8 == FUNC_0(VAR_5))
  return -VAR_3;


 VAR_6->lux_persistence = VAR_4[VAR_8];
 VAR_6->arate = VAR_5[VAR_8];


 if (FUNC_2(&VAR_6->client->dev))
  return 0;


 return FUNC_1(VAR_6, VAR_1,
   (VAR_6->lux_persistence << VAR_0) |
   (VAR_6->prox_persistence << VAR_2));
}
