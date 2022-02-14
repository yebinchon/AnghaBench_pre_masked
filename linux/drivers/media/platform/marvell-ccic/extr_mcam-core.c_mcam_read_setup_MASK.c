
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {scalar_t__ buffer_mode; scalar_t__ nbufs; scalar_t__ bus_type; int dev_lock; int flags; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct mcam_camera*,int ) ;
 int FUNC_2 (struct mcam_camera*) ;
 int FUNC_3 (struct mcam_camera*) ;
 int FUNC_4 (struct mcam_camera*) ;
 int FUNC_5 (struct mcam_camera*) ;
 int FUNC_6 (struct mcam_camera*) ;
 int FUNC_7 (struct mcam_camera*) ;
 scalar_t__ FUNC_8 (struct mcam_camera*) ;
 int FUNC_9 (struct mcam_camera*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct mcam_camera *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;





 if (VAR_6->buffer_mode == VAR_0 && VAR_6->nbufs == 0 &&
   FUNC_1(VAR_6, 0))
  return -VAR_3;

 if (FUNC_8(VAR_6)) {
  FUNC_2(VAR_6);
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7)
   return VAR_7;
 }




 FUNC_10(&VAR_6->dev_lock, VAR_8);
 FUNC_0(VAR_1, &VAR_6->flags);
 FUNC_9(VAR_6);
 if (VAR_6->bus_type == VAR_5)
  FUNC_7(VAR_6);
 else
  FUNC_6(VAR_6);
 FUNC_4(VAR_6);
 VAR_6->state = VAR_4;
 if (!FUNC_12(VAR_2, &VAR_6->flags))
  FUNC_5(VAR_6);
 FUNC_11(&VAR_6->dev_lock, VAR_8);
 return 0;
}
