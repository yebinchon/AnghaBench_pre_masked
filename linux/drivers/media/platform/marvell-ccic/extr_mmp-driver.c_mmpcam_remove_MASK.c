
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dummy; } ;
struct mmp_camera {struct mcam_camera mcam; } ;


 int FUNC_0 (struct mcam_camera*) ;
 int FUNC_1 (struct mmp_camera*) ;

__attribute__((used)) static int FUNC_2(struct mmp_camera *VAR_0)
{
 struct mcam_camera *VAR_1 = &VAR_0->mcam;

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
 return 0;
}
