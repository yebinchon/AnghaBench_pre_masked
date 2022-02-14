
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev_lock; } ;
struct cafe_camera {int smbus_wait; scalar_t__ registered; struct mcam_camera mcam; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (struct mcam_camera*,int ) ;
 int FUNC_2 (struct mcam_camera*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (struct mcam_camera*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct cafe_camera *VAR_4 = VAR_3;
 struct mcam_camera *VAR_5 = &VAR_4->mcam;
 unsigned int VAR_6, VAR_7;

 FUNC_4(&VAR_5->dev_lock);
 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_7 = VAR_4->registered && FUNC_3(VAR_5, VAR_6);
 if (VAR_6 & VAR_1) {
  FUNC_2(VAR_5, VAR_0, VAR_1);
  FUNC_6(&VAR_4->smbus_wait);
  VAR_7 = 1;
 }
 FUNC_5(&VAR_5->dev_lock);
 return FUNC_0(VAR_7);
}
