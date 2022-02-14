
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,char*,int,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_6(&VAR_6);


 if (!VAR_4) {
  VAR_10 = FUNC_8(VAR_7, "serial",
           VAR_3, VAR_2);
  if (VAR_10 && VAR_10 != -VAR_1) {
   FUNC_7(&VAR_6);
   return VAR_10;
  }

  VAR_4++;
 }


 FUNC_0(VAR_5, VAR_5, VAR_3, VAR_2);

 FUNC_1(&VAR_8->dev, "Alias bitmap: %*pb\n",
  VAR_2, VAR_5);


 VAR_9 = FUNC_9(VAR_8->dev.of_node, "serial");
 if (VAR_9 < 0) {
  FUNC_4(&VAR_8->dev,
    "No serial alias passed. Using the first free id\n");






  VAR_9 = 0;

  for (;;) {
   FUNC_3(&VAR_8->dev, "Checking id %d\n", VAR_9);
   VAR_9 = FUNC_5(VAR_5, VAR_2, VAR_9);


   if (VAR_9 == VAR_2) {
    FUNC_2(&VAR_8->dev, "No free ID\n");
    FUNC_7(&VAR_6);
    return -VAR_0;
   }

   FUNC_1(&VAR_8->dev, "The empty id is %d\n", VAR_9);

   if (!FUNC_10(VAR_9, VAR_5)) {

    FUNC_1(&VAR_8->dev,
     "Selected ID %d allocation passed\n",
     VAR_9);
    break;
   }
   FUNC_1(&VAR_8->dev,
    "Selected ID %d allocation failed\n", VAR_9);

   VAR_9++;
  }
 }

 FUNC_7(&VAR_6);

 return VAR_9;
}
