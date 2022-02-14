
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_port {int slock; int buffers; } ;
struct vchiq_mmal_instance {int dummy; } ;
struct mmal_buffer {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct vchiq_mmal_instance*,struct vchiq_mmal_port*,struct mmal_buffer*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct vchiq_mmal_instance *VAR_1,
        struct vchiq_mmal_port *VAR_2,
        struct mmal_buffer *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == -VAR_0) {

  FUNC_2(&VAR_2->slock, VAR_4);
  FUNC_1(&VAR_3->list, &VAR_2->buffers);
  FUNC_3(&VAR_2->slock, VAR_4);
 }

 return 0;
}
