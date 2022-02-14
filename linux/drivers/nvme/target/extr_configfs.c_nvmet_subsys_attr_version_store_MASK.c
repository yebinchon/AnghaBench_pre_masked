
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int ver; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*,int*,int*,int*) ;
 struct nvmet_subsys* FUNC_3 (struct config_item*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_2,
            const char *VAR_3, size_t VAR_4)
{
 struct nvmet_subsys *VAR_5 = FUNC_3(VAR_2);
 int VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;


 VAR_9 = FUNC_2(VAR_3, "%d.%d.%d\n", &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9 != 2 && VAR_9 != 3)
  return -VAR_0;

 FUNC_1(&VAR_1);
 VAR_5->ver = FUNC_0(VAR_6, VAR_7, VAR_8);
 FUNC_4(&VAR_1);

 return VAR_4;
}
