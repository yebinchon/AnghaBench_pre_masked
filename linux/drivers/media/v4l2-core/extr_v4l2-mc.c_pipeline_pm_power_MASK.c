
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_graph {int dummy; } ;
struct media_entity {int dummy; } ;


 scalar_t__ FUNC_0 (struct media_entity*) ;
 struct media_entity* FUNC_1 (struct media_graph*) ;
 int FUNC_2 (struct media_graph*,struct media_entity*) ;
 int FUNC_3 (struct media_entity*,int) ;

__attribute__((used)) static int FUNC_4(struct media_entity *VAR_0, int VAR_1,
 struct media_graph *VAR_2)
{
 struct media_entity *VAR_3 = VAR_0;
 int VAR_4 = 0;

 if (!VAR_1)
  return 0;

 FUNC_2(VAR_2, VAR_0);

 while (!VAR_4 && (VAR_0 = FUNC_1(VAR_2)))
  if (FUNC_0(VAR_0))
   VAR_4 = FUNC_3(VAR_0, VAR_1);

 if (!VAR_4)
  return VAR_4;

 FUNC_2(VAR_2, VAR_3);

 while ((VAR_3 = FUNC_1(VAR_2))
        && VAR_3 != VAR_0)
  if (FUNC_0(VAR_3))
   FUNC_3(VAR_3, -VAR_1);

 return VAR_4;
}
