
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_ns {int anagrpid; int subsys; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ,int*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 struct nvmet_ns* FUNC_3 (struct config_item*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct nvmet_ns *VAR_8 = FUNC_3(VAR_5);
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_6, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 < 1 || VAR_10 > VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4);
 VAR_9 = VAR_8->anagrpid;
 VAR_3[VAR_10]++;
 VAR_8->anagrpid = VAR_10;
 VAR_3[VAR_9]--;
 VAR_2++;
 FUNC_4(&VAR_4);

 FUNC_2(VAR_8->subsys, ((void*)0));
 return VAR_7;
}
