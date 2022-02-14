
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {int priv_lock; int receive_ready; int local_interrupt_buffer; } ;
struct iucv_path {struct vmlogrdr_priv_t* private; } ;
struct iucv_message {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct iucv_message*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iucv_path *VAR_1,
       struct iucv_message *VAR_2)
{
 struct vmlogrdr_priv_t * VAR_3 = VAR_1->private;






 FUNC_2(&VAR_3->priv_lock);
 FUNC_1(&VAR_3->local_interrupt_buffer, VAR_2, sizeof(*VAR_2));
 FUNC_0(&VAR_3->receive_ready);
 FUNC_3(&VAR_3->priv_lock);
 FUNC_4(&VAR_0);
}
