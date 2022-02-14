
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_graph {int dummy; } ;
struct media_entity {scalar_t__ use_count; } ;


 scalar_t__ FUNC_0 (struct media_entity*) ;
 struct media_entity* FUNC_1 (struct media_graph*) ;
 int FUNC_2 (struct media_graph*,struct media_entity*) ;

__attribute__((used)) static int FUNC_3(struct media_entity *VAR_0,
 struct media_graph *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(VAR_1, VAR_0);

 while ((VAR_0 = FUNC_1(VAR_1))) {
  if (FUNC_0(VAR_0))
   VAR_2 += VAR_0->use_count;
 }

 return VAR_2;
}
