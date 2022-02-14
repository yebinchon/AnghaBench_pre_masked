
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int components; struct enclosure_component* component; } ;
struct enclosure_component {int number; int cdev; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static struct enclosure_component *
FUNC_2(struct enclosure_device *VAR_0,
    const char *VAR_1)
{
 int VAR_2;
 const char *VAR_3;
 struct enclosure_component *VAR_4;

 if (!VAR_0 || !VAR_1 || !VAR_1[0])
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->components; VAR_2++) {
  VAR_4 = &VAR_0->component[VAR_2];
  VAR_3 = FUNC_0(&VAR_4->cdev);
  if (VAR_4->number != -1 &&
      VAR_3 && VAR_3[0] &&
      !FUNC_1(VAR_3, VAR_1))
   return VAR_4;
 }

 return ((void*)0);
}
