
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev_lock; int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mcam_camera*,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mcam_camera*) ;
 int FUNC_3 (struct mcam_camera*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct mcam_camera *VAR_3)
{
 unsigned long VAR_4;






 FUNC_5(&VAR_3->dev_lock, VAR_4);
 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_3(VAR_3);
 VAR_3->state = VAR_2;
 FUNC_6(&VAR_3->dev_lock, VAR_4);







 FUNC_4(150);
 if (FUNC_7(VAR_0, &VAR_3->flags))
  FUNC_0(VAR_3, "Timeout waiting for DMA to end\n");

 FUNC_5(&VAR_3->dev_lock, VAR_4);
 FUNC_2(VAR_3);
 FUNC_6(&VAR_3->dev_lock, VAR_4);
}
