
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_pipeline {scalar_t__ output; scalar_t__ input; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct iss_pipeline *VAR_0)
{
 if (VAR_0->input)
  FUNC_0(VAR_0->input);
 if (VAR_0->output)
  FUNC_0(VAR_0->output);
}
