
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_filter_spec {unsigned int dmaq_id; int flags; int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ef4_filter_spec*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ef4_filter_spec *VAR_2,
          unsigned VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->priority = VAR_1;
 VAR_2->flags = VAR_0;
 VAR_2->dmaq_id = VAR_3;
}
