
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ context_id; } ;
struct efx_nic {TYPE_1__ rss_context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_1)
{
 int VAR_2;

 if (VAR_1->rss_context.context_id != VAR_0) {
  VAR_2 = FUNC_1(VAR_1, VAR_1->rss_context.context_id);
  FUNC_0(VAR_2 != 0);
 }
 VAR_1->rss_context.context_id = VAR_0;
}
