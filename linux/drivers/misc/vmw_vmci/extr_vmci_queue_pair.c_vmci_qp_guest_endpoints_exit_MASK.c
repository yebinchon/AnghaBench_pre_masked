
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qp_guest_endpoint {int dummy; } ;
struct qp_entry {int flags; scalar_t__ ref_count; int handle; } ;
struct TYPE_4__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qp_guest_endpoint*) ;
 TYPE_1__ VAR_1 ;
 struct qp_entry* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct qp_entry*) ;

void FUNC_6(void)
{
 struct qp_entry *VAR_2;
 struct qp_guest_endpoint *VAR_3;

 FUNC_0(&VAR_1.mutex);

 while ((VAR_2 = FUNC_4(&VAR_1))) {
  VAR_3 = (struct qp_guest_endpoint *)VAR_2;


  if (!(VAR_2->flags & VAR_0))
   FUNC_2(VAR_2->handle);


  VAR_2->ref_count = 0;
  FUNC_5(&VAR_1, VAR_2);

  FUNC_3(VAR_3);
 }

 FUNC_1(&VAR_1.mutex);
}
