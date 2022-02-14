
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2880_priv {int group_count; int func_count; int dev; struct rt2880_pmx_group* groups; struct rt2880_pmx_func** func; scalar_t__* group_names; } ;
struct rt2880_pmx_group {int func_count; struct rt2880_pmx_func* func; scalar_t__ name; } ;
struct rt2880_pmx_func {int* groups; int group_count; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int,int ) ;
 int* FUNC_1 (int ,int,int ) ;
 struct rt2880_pmx_func VAR_1 ;

__attribute__((used)) static int FUNC_2(struct rt2880_priv *VAR_2)
{
 struct rt2880_pmx_func **VAR_3;
 struct rt2880_pmx_group *VAR_4 = VAR_2->groups;
 int VAR_5, VAR_6, VAR_7 = 0;


 while (VAR_4->name) {
  VAR_2->group_count++;
  VAR_4++;
 }


 VAR_2->group_names = FUNC_0(VAR_2->dev, VAR_2->group_count,
          sizeof(char *), VAR_0);
 if (!VAR_2->group_names)
  return -1;

 for (VAR_5 = 0; VAR_5 < VAR_2->group_count; VAR_5++) {
  VAR_2->group_names[VAR_5] = VAR_2->groups[VAR_5].name;
  VAR_2->func_count += VAR_2->groups[VAR_5].func_count;
 }


 VAR_2->func_count++;


 VAR_3 = VAR_2->func = FUNC_0(VAR_2->dev,
       VAR_2->func_count,
       sizeof(struct rt2880_pmx_func),
       VAR_0);
 VAR_1.groups = FUNC_0(VAR_2->dev, VAR_2->group_count, sizeof(int),
     VAR_0);
 if (!VAR_3 || !VAR_1.groups)
  return -1;


 VAR_1.group_count = VAR_2->group_count;
 for (VAR_5 = 0; VAR_5 < VAR_1.group_count; VAR_5++)
  VAR_1.groups[VAR_5] = VAR_5;

 VAR_3[VAR_7] = &VAR_1;
 VAR_7++;


 for (VAR_5 = 0; VAR_5 < VAR_2->group_count; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2->groups[VAR_5].func_count; VAR_6++) {
   VAR_3[VAR_7] = &VAR_2->groups[VAR_5].func[VAR_6];
   VAR_3[VAR_7]->groups = FUNC_1(VAR_2->dev, sizeof(int),
          VAR_0);
   VAR_3[VAR_7]->groups[0] = VAR_5;
   VAR_3[VAR_7]->group_count = 1;
   VAR_7++;
  }
 }
 return 0;
}
