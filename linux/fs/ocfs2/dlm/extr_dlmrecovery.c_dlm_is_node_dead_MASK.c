
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_ctxt {int spinlock; int domain_map; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct dlm_ctxt *VAR_0, u8 VAR_1)
{
 int VAR_2;
 FUNC_0(&VAR_0->spinlock);
 VAR_2 = !FUNC_2(VAR_1, VAR_0->domain_map);
 FUNC_1(&VAR_0->spinlock);
 return VAR_2;
}
