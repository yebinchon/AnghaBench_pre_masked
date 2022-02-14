
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_pipeline {scalar_t__ stream_state; int input; int output; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct isp_pipeline*,scalar_t__) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct isp_pipeline *VAR_1)
{
 int VAR_2 = VAR_1->stream_state == VAR_0;

 FUNC_1(VAR_1->output, !VAR_2);
 if (VAR_2)
  FUNC_1(VAR_1->input, 0);
 FUNC_0(VAR_1, VAR_1->stream_state);
}
