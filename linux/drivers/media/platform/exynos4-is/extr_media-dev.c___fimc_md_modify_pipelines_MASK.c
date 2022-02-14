
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_graph {int dummy; } ;
struct media_entity {int dummy; } ;


 int FUNC_0 (struct media_entity*,int) ;
 int FUNC_1 (struct media_entity*) ;
 struct media_entity* FUNC_2 (struct media_graph*) ;
 int FUNC_3 (struct media_graph*,struct media_entity*) ;

__attribute__((used)) static int FUNC_4(struct media_entity *VAR_0, bool VAR_1,
          struct media_graph *VAR_2)
{
 struct media_entity *VAR_3 = VAR_0;
 int VAR_4;







 FUNC_3(VAR_2, VAR_0);

 while ((VAR_0 = FUNC_2(VAR_2))) {
  if (!FUNC_1(VAR_0))
   continue;

  VAR_4 = FUNC_0(VAR_0, VAR_1);

  if (VAR_4 < 0)
   goto err;
 }

 return 0;

err:
 FUNC_3(VAR_2, VAR_3);

 while ((VAR_3 = FUNC_2(VAR_2))) {
  if (!FUNC_1(VAR_3))
   continue;

  FUNC_0(VAR_3, !VAR_1);

  if (VAR_3 == VAR_0)
   break;
 }

 return VAR_4;
}
