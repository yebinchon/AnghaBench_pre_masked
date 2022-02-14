
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_filter_spec {int priority; int flags; unsigned int dmaq_id; int rss_context; } ;
typedef enum ef4_filter_priority { ____Placeholder_ef4_filter_priority } ef4_filter_priority ;
typedef enum ef4_filter_flags { ____Placeholder_ef4_filter_flags } ef4_filter_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ef4_filter_spec*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ef4_filter_spec *VAR_2,
          enum ef4_filter_priority VAR_3,
          enum ef4_filter_flags VAR_4,
          unsigned VAR_5)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->priority = VAR_3;
 VAR_2->flags = VAR_0 | VAR_4;
 VAR_2->rss_context = VAR_1;
 VAR_2->dmaq_id = VAR_5;
}
