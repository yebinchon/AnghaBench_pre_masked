
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct vp702x_fe_state {int status_check_interval; scalar_t__ next_status_check; void* sig; TYPE_1__* d; void* snr; void* lock; } ;
struct vp702x_device_state {void** buf; int buf_mutex; } ;
struct TYPE_2__ {struct vp702x_device_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ,void**,int) ;

__attribute__((used)) static int FUNC_4(struct vp702x_fe_state *VAR_4)
{
 struct vp702x_device_state *VAR_5 = VAR_4->d->priv;
 u8 *VAR_6;

 if (FUNC_2(VAR_3, VAR_4->next_status_check)) {
  FUNC_0(&VAR_5->buf_mutex);
  VAR_6 = VAR_5->buf;

  FUNC_3(VAR_4->d, VAR_1, 0, 0, VAR_6, 10);
  VAR_4->lock = VAR_6[4];

  FUNC_3(VAR_4->d, VAR_2, 0x11, 0, VAR_6, 1);
  VAR_4->snr = VAR_6[0];

  FUNC_3(VAR_4->d, VAR_2, 0x15, 0, VAR_6, 1);
  VAR_4->sig = VAR_6[0];

  FUNC_1(&VAR_5->buf_mutex);
  VAR_4->next_status_check = VAR_3 + (VAR_4->status_check_interval*VAR_0)/1000;
 }
 return 0;
}
