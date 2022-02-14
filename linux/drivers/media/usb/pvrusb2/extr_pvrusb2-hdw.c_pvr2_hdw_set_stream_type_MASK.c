
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int desired_stream_type; int big_lock; scalar_t__ state_pipeline_config; } ;
typedef enum pvr2_config { ____Placeholder_pvr2_config } pvr2_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (struct pvr2_hdw*,int ) ;
 int FUNC_4 (char*,scalar_t__) ;

int FUNC_5(struct pvr2_hdw *VAR_0,enum pvr2_config VAR_1)
{
 int VAR_2;
 FUNC_1(VAR_0->big_lock);
 if ((VAR_2 = (VAR_0->desired_stream_type != VAR_1)) != 0) {
  VAR_0->desired_stream_type = VAR_1;
  VAR_0->state_pipeline_config = 0;
  FUNC_4("state_pipeline_config",
       VAR_0->state_pipeline_config);
  FUNC_2(VAR_0);
 }
 FUNC_0(VAR_0->big_lock);
 if (VAR_2) return 0;
 return FUNC_3(VAR_0,0);
}
