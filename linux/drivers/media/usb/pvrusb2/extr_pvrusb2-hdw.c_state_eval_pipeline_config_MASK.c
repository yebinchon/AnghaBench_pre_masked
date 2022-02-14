
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ state_pipeline_pause; scalar_t__ state_pipeline_config; } ;


 int FUNC_0 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_hdw *VAR_0)
{
 if (VAR_0->state_pipeline_config ||
     VAR_0->state_pipeline_pause) return 0;
 FUNC_0(VAR_0);
 return !0;
}
