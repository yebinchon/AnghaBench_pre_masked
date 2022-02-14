
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {struct vio_dring_state* drings; } ;
struct vio_dring_state {int rcv_nxt; int snd_nxt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(struct vio_driver_state *VAR_2)
{
 struct vio_dring_state *VAR_3;

 VAR_3 = &VAR_2->drings[VAR_0];
 VAR_3->rcv_nxt = 1;
 VAR_3->snd_nxt = 1;

 VAR_3 = &VAR_2->drings[VAR_1];
 VAR_3->rcv_nxt = 1;
 VAR_3->snd_nxt = 1;
}
