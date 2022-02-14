
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int create_link; int list; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct mdev_link*) ;
 struct mdev_link* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct mdev_link *VAR_5 = FUNC_3(VAR_2);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (!VAR_6)
  return VAR_4;
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 && VAR_7 != -VAR_0)
  return VAR_7;
 FUNC_1(&VAR_5->list, &VAR_1);
 VAR_5->create_link = VAR_6;
 return VAR_4;
}
