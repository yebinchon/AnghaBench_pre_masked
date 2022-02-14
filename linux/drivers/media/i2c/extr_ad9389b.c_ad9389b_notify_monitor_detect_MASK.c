
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ad9389b_state {int have_monitor; } ;
struct ad9389b_monitor_detect {int present; } ;


 int VAR_0 ;
 struct ad9389b_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_1)
{
 struct ad9389b_monitor_detect VAR_2;
 struct ad9389b_state *VAR_3 = FUNC_0(VAR_1);

 VAR_2.present = VAR_3->have_monitor;
 FUNC_1(VAR_1, VAR_0, (void *)&VAR_2);
}
