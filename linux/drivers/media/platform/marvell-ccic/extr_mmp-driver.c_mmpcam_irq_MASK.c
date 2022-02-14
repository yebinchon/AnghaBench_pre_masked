
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev_lock; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct mcam_camera*,int ) ;
 unsigned int FUNC_2 (struct mcam_camera*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct mcam_camera *VAR_3 = VAR_2;
 unsigned int VAR_4, VAR_5;

 FUNC_3(&VAR_3->dev_lock);
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 FUNC_4(&VAR_3->dev_lock);
 return FUNC_0(VAR_5);
}
