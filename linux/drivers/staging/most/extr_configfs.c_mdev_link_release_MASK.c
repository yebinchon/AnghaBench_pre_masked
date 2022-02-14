
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int list; int comp; int channel; int device; } ;
struct config_item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mdev_link*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;
 struct mdev_link* FUNC_5 (struct config_item*) ;

__attribute__((used)) static void FUNC_6(struct config_item *VAR_2)
{
 struct mdev_link *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 if (!FUNC_2(&VAR_1)) {
  VAR_4 = FUNC_3(VAR_3->device, VAR_3->channel,
           VAR_3->comp);
  if (VAR_4 && (VAR_4 != -VAR_0))
   FUNC_4("Removing link failed.\n");
  FUNC_1(&VAR_3->list);
 }
 FUNC_0(FUNC_5(VAR_2));
}
