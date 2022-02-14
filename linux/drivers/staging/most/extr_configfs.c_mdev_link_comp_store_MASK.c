
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int comp; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,char const*) ;
 struct mdev_link* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
        const char *VAR_1, size_t VAR_2)
{
 struct mdev_link *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->comp, VAR_1);
 return VAR_2;
}
