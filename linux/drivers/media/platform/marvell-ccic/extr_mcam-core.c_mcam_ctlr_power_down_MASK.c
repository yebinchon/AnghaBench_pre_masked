
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev_lock; int (* plat_power_down ) (struct mcam_camera*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mcam_camera*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct mcam_camera*) ;

__attribute__((used)) static void FUNC_4(struct mcam_camera *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->dev_lock, VAR_3);





 FUNC_0(VAR_2, VAR_1, VAR_0);
 if (VAR_2->plat_power_down)
  VAR_2->plat_power_down(VAR_2);
 FUNC_2(&VAR_2->dev_lock, VAR_3);
}
