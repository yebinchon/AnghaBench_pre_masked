
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vio_driver_state {int _peer_sid; int _local_sid; } ;
struct vnet_port {int napi_resume; int napi_stop_idx; struct vio_driver_state vio; } ;
struct vio_dring_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vio_dring_state*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct vio_dring_state*,scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct vnet_port*,struct vio_dring_state*,int,int,int ) ;
 int FUNC_7 (struct vnet_port*,struct vio_dring_state*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_8(struct vnet_port *VAR_4, struct vio_dring_state *VAR_5,
   u32 VAR_6, u32 VAR_7, int *VAR_8, int VAR_9)
{
 struct vio_driver_state *VAR_10 = &VAR_4->vio;
 int VAR_11 = -1, VAR_12 = -1;
 bool VAR_13 = 1;

 VAR_7 = (VAR_7 == (u32)-1) ? FUNC_4(VAR_5, VAR_6)
          : FUNC_3(VAR_5, VAR_7);

 FUNC_5(VAR_0, "vnet_walk_rx start[%08x] end[%08x]\n", VAR_6, VAR_7);

 while (VAR_6 != VAR_7) {
  int VAR_14 = 0, VAR_15 = FUNC_7(VAR_4, VAR_5, VAR_6, &VAR_14);

  if (VAR_15 == -VAR_1)
   return VAR_15;
  if (VAR_15 != 0)
   break;
  (*VAR_8)++;
  if (VAR_11 == -1)
   VAR_11 = VAR_6;
  VAR_12 = VAR_6;
  VAR_6 = FUNC_3(VAR_5, VAR_6);
  if (VAR_14 && VAR_6 != VAR_7) {
   VAR_15 = FUNC_6(VAR_4, VAR_5, VAR_11, VAR_12,
         VAR_2);
   if (VAR_15 == -VAR_1)
    return VAR_15;
   VAR_11 = -1;
  }
  if ((*VAR_8) >= VAR_9) {
   VAR_13 = 0;
   break;
  }
 }
 if (FUNC_2(VAR_11 == -1)) {
  VAR_12 = FUNC_4(VAR_5, VAR_6);
  VAR_11 = VAR_12;
 }
 if (VAR_13) {
  VAR_4->napi_resume = 0;
  FUNC_1(VAR_4->vio._local_sid,
            VAR_4->vio._peer_sid,
            VAR_12, *VAR_8);
  return FUNC_6(VAR_4, VAR_5, VAR_11, VAR_12,
         VAR_3);
 } else {
  FUNC_0(VAR_4->vio._local_sid,
      VAR_4->vio._peer_sid,
      VAR_12, *VAR_8);
  VAR_4->napi_resume = 1;
  VAR_4->napi_stop_idx = VAR_12;
  return 1;
 }
}
