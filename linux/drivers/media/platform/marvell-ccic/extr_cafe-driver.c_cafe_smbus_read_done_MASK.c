
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mcam_camera*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mcam_camera *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;






 FUNC_3(20);
 FUNC_1(&VAR_3->dev_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_2(&VAR_3->dev_lock, VAR_4);
 return VAR_5 & (VAR_2|VAR_1);
}
