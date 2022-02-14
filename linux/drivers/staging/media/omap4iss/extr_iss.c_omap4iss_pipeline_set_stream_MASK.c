
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_pipeline {int stream_state; } ;
typedef enum iss_pipeline_stream_state { ____Placeholder_iss_pipeline_stream_state } iss_pipeline_stream_state ;


 int VAR_0 ;
 int FUNC_0 (struct iss_pipeline*,int *) ;
 int FUNC_1 (struct iss_pipeline*,int) ;

int FUNC_2(struct iss_pipeline *VAR_1,
     enum iss_pipeline_stream_state VAR_2)
{
 int VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = FUNC_0(VAR_1, ((void*)0));
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 == 0 || VAR_2 == VAR_0)
  VAR_1->stream_state = VAR_2;

 return VAR_3;
}
