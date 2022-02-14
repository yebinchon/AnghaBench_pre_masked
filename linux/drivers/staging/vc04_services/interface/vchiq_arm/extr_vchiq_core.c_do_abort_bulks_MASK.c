
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_service {int bulk_rx; int bulk_tx; int bulk_mutex; } ;
typedef scalar_t__ VCHIQ_STATUS_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vchiq_service*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vchiq_service*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct vchiq_service *VAR_1)
{
 VCHIQ_STATUS_T VAR_2;


 if (FUNC_1(&VAR_1->bulk_mutex))
  return 0;
 FUNC_0(VAR_1, &VAR_1->bulk_tx);
 FUNC_0(VAR_1, &VAR_1->bulk_rx);
 FUNC_2(&VAR_1->bulk_mutex);

 VAR_2 = FUNC_3(VAR_1, &VAR_1->bulk_tx, 0 );
 if (VAR_2 == VAR_0)
  VAR_2 = FUNC_3(VAR_1, &VAR_1->bulk_rx,
   0 );
 return (VAR_2 == VAR_0);
}
