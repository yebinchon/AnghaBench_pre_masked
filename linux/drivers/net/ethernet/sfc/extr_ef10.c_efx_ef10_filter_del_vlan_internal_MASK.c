
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int filter_sem; } ;
struct efx_ef10_filter_vlan {scalar_t__* uc; scalar_t__* mc; scalar_t__* default_filters; int list; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_ef10_filter_vlan*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_3,
           struct efx_ef10_filter_vlan *VAR_4)
{
 unsigned int VAR_5;


 if (!FUNC_2(&VAR_3->filter_sem))
  return;

 FUNC_4(&VAR_4->list);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->uc); VAR_5++)
  FUNC_1(VAR_3, VAR_2,
           VAR_4->uc[VAR_5]);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->mc); VAR_5++)
  FUNC_1(VAR_3, VAR_2,
           VAR_4->mc[VAR_5]);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_4->default_filters[VAR_5] != VAR_0)
   FUNC_1(VAR_3, VAR_2,
            VAR_4->default_filters[VAR_5]);

 FUNC_3(VAR_4);
}
