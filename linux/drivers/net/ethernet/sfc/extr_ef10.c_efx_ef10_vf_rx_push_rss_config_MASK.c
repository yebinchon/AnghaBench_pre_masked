
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ context_id; } ;
struct efx_nic {TYPE_1__ rss_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int *) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_2, bool VAR_3,
       const u32 *VAR_4
       __attribute__ ((unused)),
       const u8 *VAR_5
       __attribute__ ((unused)))
{
 if (VAR_3)
  return -VAR_1;
 if (VAR_2->rss_context.context_id != VAR_0)
  return 0;
 return FUNC_0(VAR_2, ((void*)0));
}
