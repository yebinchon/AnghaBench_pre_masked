
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vmci_handle {int dummy; } ;
struct TYPE_5__ {int flags; int ref_count; } ;
struct qp_guest_endpoint {TYPE_2__ qp; } ;
struct TYPE_4__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmci_handle) ;
 int FUNC_3 (struct qp_guest_endpoint*) ;
 TYPE_1__ VAR_3 ;
 struct qp_guest_endpoint* FUNC_4 (struct vmci_handle) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int,struct vmci_handle) ;

__attribute__((used)) static int FUNC_7(struct vmci_handle VAR_4)
{
 int VAR_5;
 struct qp_guest_endpoint *VAR_6;
 u32 VAR_7 = ~0;

 FUNC_0(&VAR_3.mutex);

 VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6) {
  FUNC_1(&VAR_3.mutex);
  return VAR_0;
 }

 if (VAR_6->qp.flags & VAR_1) {
  VAR_5 = VAR_2;

  if (VAR_6->qp.ref_count > 1) {
   VAR_5 = FUNC_6(0, VAR_4);






  }
 } else {
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 < VAR_2) {
   FUNC_1(&VAR_3.mutex);
   return VAR_5;
  }
 }






 VAR_6->qp.ref_count--;
 if (VAR_6->qp.ref_count == 0)
  FUNC_5(&VAR_3, &VAR_6->qp);


 if (VAR_6)
  VAR_7 = VAR_6->qp.ref_count;

 FUNC_1(&VAR_3.mutex);

 if (VAR_7 == 0)
  FUNC_3(VAR_6);

 return VAR_5;
}
