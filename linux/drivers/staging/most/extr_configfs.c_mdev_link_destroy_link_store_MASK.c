
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int destroy_link; int list; int comp; int channel; int device; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 struct mdev_link* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct mdev_link *VAR_4 = FUNC_4(VAR_1);
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (!VAR_5)
  return VAR_3;
 VAR_4->destroy_link = VAR_5;
 VAR_6 = FUNC_3(VAR_4->device, VAR_4->channel,
          VAR_4->comp);
 if (VAR_6)
  return VAR_6;
 if (!FUNC_2(&VAR_0))
  FUNC_1(&VAR_4->list);
 return VAR_3;
}
