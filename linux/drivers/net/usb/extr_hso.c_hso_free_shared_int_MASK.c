
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_shared_int {int shared_int_lock; struct hso_shared_int* shared_intr_buf; int shared_intr_urb; } ;


 int FUNC_0 (struct hso_shared_int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hso_shared_int *VAR_0)
{
 FUNC_2(VAR_0->shared_intr_urb);
 FUNC_0(VAR_0->shared_intr_buf);
 FUNC_1(&VAR_0->shared_int_lock);
 FUNC_0(VAR_0);
}
