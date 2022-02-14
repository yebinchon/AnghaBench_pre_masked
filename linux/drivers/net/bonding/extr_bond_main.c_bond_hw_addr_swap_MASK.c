
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct slave {int dev; } ;
struct bonding {TYPE_1__* dev; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct bonding *VAR_2, struct slave *VAR_3,
         struct slave *VAR_4)
{
 if (VAR_4) {
  if (VAR_2->dev->flags & VAR_1)
   FUNC_3(VAR_4->dev, -1);

  if (VAR_2->dev->flags & VAR_0)
   FUNC_2(VAR_4->dev, -1);

  FUNC_0(VAR_2->dev, VAR_4->dev);
 }

 if (VAR_3) {

  if (VAR_2->dev->flags & VAR_1)
   FUNC_3(VAR_3->dev, 1);

  if (VAR_2->dev->flags & VAR_0)
   FUNC_2(VAR_3->dev, 1);

  FUNC_5(VAR_2->dev);
  FUNC_4(VAR_3->dev, VAR_2->dev);
  FUNC_1(VAR_3->dev, VAR_2->dev);
  FUNC_6(VAR_2->dev);
 }
}
