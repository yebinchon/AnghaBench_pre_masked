
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {struct vio_dring_state* drings; } ;
struct vnet_port {int napi_resume; struct vio_driver_state vio; } ;
struct vio_dring_state {scalar_t__ rcv_nxt; } ;
struct TYPE_2__ {scalar_t__ stype_env; } ;
struct vio_dring_data {scalar_t__ seq; int end_idx; int start_idx; TYPE_1__ tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct vnet_port*,struct vio_dring_state*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct vnet_port *VAR_3, void *VAR_4, int *VAR_5,
     int VAR_6)
{
 struct vio_dring_data *VAR_7 = VAR_4;
 struct vio_dring_state *VAR_8 = &VAR_3->vio.drings[VAR_2];
 struct vio_driver_state *VAR_9 = &VAR_3->vio;

 FUNC_2(VAR_0, "vnet_rx stype_env[%04x] seq[%016llx] rcv_nxt[%016llx]\n",
        VAR_7->tag.stype_env, VAR_7->seq, VAR_8->rcv_nxt);

 if (FUNC_1(VAR_7->tag.stype_env != VAR_1))
  return 0;
 if (FUNC_1(VAR_7->seq != VAR_8->rcv_nxt)) {
  FUNC_0("RX out of sequence seq[0x%llx] rcv_nxt[0x%llx]\n",
         VAR_7->seq, VAR_8->rcv_nxt);
  return 0;
 }

 if (!VAR_3->napi_resume)
  VAR_8->rcv_nxt++;



 return FUNC_3(VAR_3, VAR_8, VAR_7->start_idx, VAR_7->end_idx,
       VAR_5, VAR_6);
}
