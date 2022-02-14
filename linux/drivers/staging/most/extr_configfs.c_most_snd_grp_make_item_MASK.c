
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct mdev_link {struct config_item item; int comp; int name; scalar_t__ create_link; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct mdev_link* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static struct config_item *FUNC_4(struct config_group *VAR_3,
        const char *VAR_4)
{
 struct mdev_link *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->item, VAR_4, &VAR_2);
 VAR_5->create_link = 0;
 FUNC_3(VAR_5->name, VAR_4);
 FUNC_3(VAR_5->comp, "sound");
 return &VAR_5->item;
}
