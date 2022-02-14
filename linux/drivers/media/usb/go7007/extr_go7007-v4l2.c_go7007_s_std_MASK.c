
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int std; int sensor_framerate; int v4l2_dev; int standard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct go7007*,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_5)
{
 if (VAR_5->std & VAR_2) {
  VAR_5->standard = VAR_1;
  VAR_5->sensor_framerate = 25025;
 } else {
  VAR_5->standard = VAR_0;
  VAR_5->sensor_framerate = 30000;
 }

 FUNC_0(&VAR_5->v4l2_dev, VAR_4, VAR_3, VAR_5->std);
 FUNC_1(VAR_5, ((void*)0), 0);
 return 0;
}
