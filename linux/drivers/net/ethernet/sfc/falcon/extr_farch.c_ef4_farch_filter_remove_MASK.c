
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;
struct ef4_farch_filter_table {int used_bitmap; struct ef4_farch_filter_spec* spec; } ;
struct ef4_farch_filter_spec {int priority; int flags; } ;
typedef enum ef4_filter_priority { ____Placeholder_ef4_filter_priority } ef4_filter_priority ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ef4_nic*,struct ef4_farch_filter_spec*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*,struct ef4_farch_filter_table*,unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct ef4_nic *VAR_2,
       struct ef4_farch_filter_table *VAR_3,
       unsigned int VAR_4,
       enum ef4_filter_priority VAR_5)
{
 struct ef4_farch_filter_spec *VAR_6 = &VAR_3->spec[VAR_4];

 if (!FUNC_3(VAR_4, VAR_3->used_bitmap) ||
     VAR_6->priority != VAR_5)
  return -VAR_1;

 if (VAR_6->flags & VAR_0) {
  FUNC_0(VAR_2, VAR_6);
  FUNC_1(VAR_2);
 } else {
  FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 return 0;
}
