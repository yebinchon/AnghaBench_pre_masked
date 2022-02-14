
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct efx_mcdi_iface {char* logging_buffer; scalar_t__ state; int seqno; scalar_t__ mode; int new_epoch; scalar_t__ logging_enabled; int iface_lock; } ;
struct TYPE_9__ {int * u32; } ;
typedef TYPE_2__ efx_dword_t ;
struct TYPE_8__ {int mcdi_max_ver; int (* mcdi_request ) (struct efx_nic*,TYPE_2__*,size_t,TYPE_2__ const*,size_t) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__,int ,unsigned int,int ,size_t) ;
 int FUNC_2 (TYPE_2__,int ,int ,int ,int,int ,unsigned int,int ,size_t,int ,int,int ,int,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (size_t) ;
 struct efx_mcdi_iface* FUNC_4 (struct efx_nic*) ;
 int VAR_16 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,char*) ;
 scalar_t__ FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct efx_nic*,TYPE_2__*,size_t,TYPE_2__ const*,size_t) ;

__attribute__((used)) static void FUNC_11(struct efx_nic *VAR_17, unsigned VAR_18,
      const efx_dword_t *VAR_19, size_t VAR_20)
{
 struct efx_mcdi_iface *VAR_21 = FUNC_4(VAR_17);



 efx_dword_t VAR_22[2];
 size_t VAR_23;
 u32 VAR_24, VAR_25;

 FUNC_0(VAR_21->state == VAR_10);


 FUNC_8(&VAR_21->iface_lock);
 ++VAR_21->seqno;
 FUNC_9(&VAR_21->iface_lock);

 VAR_25 = VAR_21->seqno & VAR_15;
 VAR_24 = 0;
 if (VAR_21->mode == VAR_9)
  VAR_24 |= VAR_8;

 if (VAR_17->type->mcdi_max_ver == 1) {

  FUNC_2(VAR_22[0],
         VAR_4, 0,
         VAR_5, 1,
         VAR_1, VAR_18,
         VAR_2, VAR_20,
         VAR_6, VAR_25,
         VAR_7, VAR_24,
         VAR_3, !VAR_21->new_epoch);
  VAR_23 = 4;
 } else {

  FUNC_0(VAR_20 > VAR_0);
  FUNC_2(VAR_22[0],
         VAR_4, 0,
         VAR_5, 1,
         VAR_1, VAR_11,
         VAR_2, 0,
         VAR_6, VAR_25,
         VAR_7, VAR_24,
         VAR_3, !VAR_21->new_epoch);
  FUNC_1(VAR_22[1],
         VAR_13, VAR_18,
         VAR_12, VAR_20);
  VAR_23 = 8;
 }
 VAR_17->type->mcdi_request(VAR_17, VAR_22, VAR_23, VAR_19, VAR_20);

 VAR_21->new_epoch = 0;
}
