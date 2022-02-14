
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_graph {int dummy; } ;
struct media_pipeline {int streaming_count; struct media_graph graph; } ;
struct media_entity {scalar_t__ stream_count; struct media_pipeline* pipe; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct media_graph*) ;
 struct media_entity* FUNC_3 (struct media_graph*) ;
 int FUNC_4 (struct media_graph*,struct media_entity*) ;

void FUNC_5(struct media_entity *VAR_0)
{
 struct media_graph *VAR_1 = &VAR_0->pipe->graph;
 struct media_pipeline *VAR_2 = VAR_0->pipe;





 if (FUNC_0(!VAR_2))
  return;

 FUNC_4(VAR_1, VAR_0);

 while ((VAR_0 = FUNC_3(VAR_1))) {

  if (!FUNC_1(VAR_0->stream_count <= 0)) {
   VAR_0->stream_count--;
   if (VAR_0->stream_count == 0)
    VAR_0->pipe = ((void*)0);
  }
 }

 if (!--VAR_2->streaming_count)
  FUNC_2(VAR_1);

}
