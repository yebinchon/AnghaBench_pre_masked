
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct o2nm_node {int nd_num; } ;
struct TYPE_2__ {int sk_callback_lock; int * sk_user_data; int * sk_data_ready; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct o2nm_node*) ;
 struct socket* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct o2nm_node* FUNC_5 (size_t) ;
 int FUNC_6 (struct o2nm_node*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct o2nm_node *VAR_4)
{
 struct socket *VAR_5 = VAR_1;
 size_t VAR_6;

 FUNC_1(VAR_3 == ((void*)0));
 FUNC_1(VAR_1 == ((void*)0));


 FUNC_9(&VAR_5->sk->sk_callback_lock);
 VAR_5->sk->sk_data_ready = VAR_5->sk->sk_user_data;
 VAR_5->sk->sk_user_data = ((void*)0);
 FUNC_10(&VAR_5->sk->sk_callback_lock);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  struct o2nm_node *VAR_7 = FUNC_5(VAR_6);
  if (VAR_7) {
   FUNC_4(VAR_7);
   FUNC_6(VAR_7);
  }
 }


 FUNC_3(VAR_0, "waiting for o2net thread to exit....\n");
 FUNC_2(VAR_3);
 VAR_3 = ((void*)0);

 FUNC_8(VAR_1);
 VAR_1 = ((void*)0);

 FUNC_7(VAR_4->nd_num);
}
