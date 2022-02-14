
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {scalar_t__ mc_bist_for_other_fn; } ;
struct TYPE_2__ {int * next; } ;
struct efx_mcdi_iface {scalar_t__ mode; int async_lock; int async_timer; TYPE_1__ async_list; } ;
struct efx_mcdi_async_param {unsigned int cmd; size_t inlen; size_t outlen; int quiet; unsigned long cookie; int list; int * complete; } ;
typedef int efx_mcdi_async_completer ;
typedef int efx_dword_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct efx_mcdi_iface* FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (struct efx_mcdi_iface*) ;
 int FUNC_3 (struct efx_nic*,unsigned int,size_t) ;
 int FUNC_4 (struct efx_nic*,unsigned int,int const*,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct efx_mcdi_async_param*) ;
 struct efx_mcdi_async_param* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (size_t,size_t) ;
 int FUNC_9 (struct efx_mcdi_async_param*,int const*,size_t) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct efx_nic *VAR_6, unsigned int VAR_7,
          const efx_dword_t *VAR_8, size_t VAR_9,
          size_t VAR_10,
          efx_mcdi_async_completer *VAR_11,
          unsigned long VAR_12, bool VAR_13)
{
 struct efx_mcdi_iface *VAR_14 = FUNC_1(VAR_6);
 struct efx_mcdi_async_param *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_3(VAR_6, VAR_7, VAR_9);
 if (VAR_16)
  return VAR_16;

 if (VAR_6->mc_bist_for_other_fn)
  return -VAR_0;

 VAR_15 = FUNC_6(sizeof(*VAR_15) + FUNC_0(FUNC_8(VAR_9, VAR_10), 4),
   VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->cmd = VAR_7;
 VAR_15->inlen = VAR_9;
 VAR_15->outlen = VAR_10;
 VAR_15->quiet = VAR_13;
 VAR_15->complete = VAR_11;
 VAR_15->cookie = VAR_12;
 FUNC_9(VAR_15 + 1, VAR_8, VAR_9);

 FUNC_11(&VAR_14->async_lock);

 if (VAR_14->mode == VAR_3) {
  FUNC_7(&VAR_15->list, &VAR_14->async_list);




  if (VAR_14->async_list.next == &VAR_15->list &&
      FUNC_2(VAR_14)) {
   FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_10(&VAR_14->async_timer,
      VAR_5 + VAR_4);
  }
 } else {
  FUNC_5(VAR_15);
  VAR_16 = -VAR_0;
 }

 FUNC_12(&VAR_14->async_lock);

 return VAR_16;
}
