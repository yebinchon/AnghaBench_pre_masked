
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int datatype; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*,char*) ;
 struct mdev_link* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct mdev_link *VAR_4 = FUNC_2(VAR_1);

 if (!FUNC_1(VAR_2, "control") && !FUNC_1(VAR_2, "async") &&
     !FUNC_1(VAR_2, "sync") && !FUNC_1(VAR_2, "isoc") &&
     !FUNC_1(VAR_2, "isoc_avp"))
  return -VAR_0;
 FUNC_0(VAR_4->datatype, VAR_2);
 return VAR_3;
}
