
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev_lock; int (* dma_setup ) (struct mcam_camera*) ;int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mcam_camera*) ;
 int FUNC_2 (struct mcam_camera*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct mcam_camera*) ;

__attribute__((used)) static int FUNC_6(struct mcam_camera *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_1->dev_lock, VAR_2);
 FUNC_0(VAR_0, &VAR_1->flags);
 VAR_1->dma_setup(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1, 0);
 FUNC_4(&VAR_1->dev_lock, VAR_2);
 return 0;
}
