
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct vfe_output {unsigned int wm_num; int * wm_idx; TYPE_1__** buf; scalar_t__ active_buf; } ;
struct vfe_device {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* bus_reload_wm ) (struct vfe_device*,int ) ;int (* wm_set_pong_addr ) (struct vfe_device*,int ,scalar_t__) ;int (* wm_set_ping_addr ) (struct vfe_device*,int ,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__* addr; } ;


 int FUNC_0 (struct vfe_device*,int ,scalar_t__) ;
 int FUNC_1 (struct vfe_device*,int ,scalar_t__) ;
 int FUNC_2 (struct vfe_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_0,
      struct vfe_output *VAR_1, u8 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 unsigned int VAR_5;

 VAR_1->active_buf = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->wm_num; VAR_5++) {
  if (VAR_1->buf[0])
   VAR_3 = VAR_1->buf[0]->addr[VAR_5];
  else
   VAR_3 = 0;

  if (VAR_1->buf[1])
   VAR_4 = VAR_1->buf[1]->addr[VAR_5];
  else
   VAR_4 = VAR_3;

  VAR_0->ops->wm_set_ping_addr(VAR_0, VAR_1->wm_idx[VAR_5], VAR_3);
  VAR_0->ops->wm_set_pong_addr(VAR_0, VAR_1->wm_idx[VAR_5], VAR_4);
  if (VAR_2)
   VAR_0->ops->bus_reload_wm(VAR_0, VAR_1->wm_idx[VAR_5]);
 }
}
