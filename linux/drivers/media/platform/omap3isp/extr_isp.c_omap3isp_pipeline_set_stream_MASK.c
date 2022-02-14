
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_pipeline {int stream_state; } ;
typedef enum isp_pipeline_stream_state { ____Placeholder_isp_pipeline_stream_state } isp_pipeline_stream_state ;


 int VAR_0 ;
 int FUNC_0 (struct isp_pipeline*) ;
 int FUNC_1 (struct isp_pipeline*,int) ;

int FUNC_2(struct isp_pipeline *VAR_1,
     enum isp_pipeline_stream_state VAR_2)
{
 int VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = FUNC_0(VAR_1);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 == 0 || VAR_2 == VAR_0)
  VAR_1->stream_state = VAR_2;

 return VAR_3;
}
