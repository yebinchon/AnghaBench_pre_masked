
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {unsigned int index; unsigned int buf_count; int addr; } ;
struct TYPE_6__ {TYPE_2__ init_evq; } ;
struct vfdi_req {TYPE_3__ u; } ;
struct TYPE_4__ {struct vfdi_req* addr; } ;
struct siena_vf {unsigned int evq0_count; int evq0_addrs; int pci_name; TYPE_1__ buf; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;
typedef int efx_oword_t ;


 unsigned int FUNC_0 (struct siena_vf*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct siena_vf*,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct efx_nic*,unsigned int) ;
 int FUNC_6 (struct efx_nic*,unsigned int,int ,unsigned int) ;
 int FUNC_7 (struct efx_nic*,int *,int ,unsigned int) ;
 int VAR_12 ;
 int FUNC_8 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct siena_vf *VAR_13)
{
 struct efx_nic *VAR_14 = VAR_13->efx;
 struct vfdi_req *VAR_15 = VAR_13->buf.addr;
 unsigned VAR_16 = VAR_15->u.init_evq.index;
 unsigned VAR_17 = VAR_15->u.init_evq.buf_count;
 unsigned VAR_18 = FUNC_3(VAR_13, VAR_16);
 unsigned VAR_19 = FUNC_0(VAR_13, VAR_16);
 efx_oword_t VAR_20;

 if (FUNC_5(VAR_14, VAR_16) ||
     FUNC_4(VAR_17, VAR_0)) {
  if (FUNC_9())
   FUNC_10(VAR_14, VAR_12, VAR_14->net_dev,
      "ERROR: Invalid INIT_EVQ from %s: evq %d bufs %d\n",
      VAR_13->pci_name, VAR_16, VAR_17);
  return VAR_10;
 }

 FUNC_6(VAR_14, VAR_19, VAR_15->u.init_evq.addr, VAR_17);

 FUNC_1(VAR_20,
        VAR_7, 1,
        VAR_5, 0,
        VAR_6, VAR_1);
 FUNC_7(VAR_14, &VAR_20, VAR_9, VAR_18);
 FUNC_1(VAR_20,
        VAR_3, 1,
        VAR_4, FUNC_2(VAR_17),
        VAR_2, VAR_19);
 FUNC_7(VAR_14, &VAR_20, VAR_8, VAR_18);

 if (VAR_16 == 0) {
  FUNC_8(VAR_13->evq0_addrs, VAR_15->u.init_evq.addr,
         VAR_17 * sizeof(u64));
  VAR_13->evq0_count = VAR_17;
 }

 return VAR_11;
}
