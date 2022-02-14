
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_pad {struct media_entity* entity; } ;
struct media_entity {int pipe; } ;
struct iss_pipeline {scalar_t__ stream_state; TYPE_1__* output; } ;
struct TYPE_2__ {int pad; } ;


 scalar_t__ VAR_0 ;
 struct media_pad* FUNC_0 (int *) ;
 struct iss_pipeline* FUNC_1 (struct media_entity*) ;

__attribute__((used)) static int FUNC_2(struct media_entity *VAR_1)
{
 struct iss_pipeline *VAR_2;
 struct media_pad *VAR_3;

 if (!VAR_1->pipe)
  return 0;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2->stream_state == VAR_0)
  return 0;
 VAR_3 = FUNC_0(&VAR_2->output->pad);
 return VAR_3->entity == VAR_1;
}
