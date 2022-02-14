
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int num_buffers; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;
 struct mdev_link* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
        const char *VAR_1, size_t VAR_2)
{
 struct mdev_link *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0, &VAR_3->num_buffers);
 if (VAR_4)
  return VAR_4;
 return VAR_2;
}
