
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_adapter {int num_active_queues; int num_msix_vectors; int aq_required; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iavf_adapter*,int,int) ;
 int FUNC_1 (struct iavf_adapter*,int,int) ;

__attribute__((used)) static void FUNC_2(struct iavf_adapter *VAR_2)
{
 int VAR_3 = VAR_2->num_active_queues;
 int VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 VAR_6 = VAR_2->num_msix_vectors - VAR_1;

 for (; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(VAR_2, VAR_5, VAR_4);
  FUNC_1(VAR_2, VAR_5, VAR_4);




  if (++VAR_5 >= VAR_6)
   VAR_5 = 0;
 }

 VAR_2->aq_required |= VAR_0;
}
