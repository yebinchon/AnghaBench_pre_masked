
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int priority; int flags; unsigned int dmaq_id; scalar_t__ rss_context; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
typedef enum efx_filter_flags { ____Placeholder_efx_filter_flags } efx_filter_flags ;


 int VAR_0 ;
 int FUNC_0 (struct efx_filter_spec*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct efx_filter_spec *VAR_1,
          enum efx_filter_priority VAR_2,
          enum efx_filter_flags VAR_3,
          unsigned VAR_4)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->priority = VAR_2;
 VAR_1->flags = VAR_0 | VAR_3;
 VAR_1->rss_context = 0;
 VAR_1->dmaq_id = VAR_4;
}
