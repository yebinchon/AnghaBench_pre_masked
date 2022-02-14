
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct o2net_node {int nn_lock; scalar_t__ nn_persistent_error; int nn_timeout; scalar_t__ nn_last_connect_attempt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 struct o2net_node* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct o2net_node*,int *,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct o2nm_node *VAR_1, int VAR_2,
    void *VAR_3)
{
 struct o2net_node *VAR_4 = FUNC_3(VAR_2);

 FUNC_7(VAR_2);

 FUNC_0(!VAR_1);


 VAR_4->nn_last_connect_attempt = VAR_0 -
  (FUNC_2(FUNC_4()) + 1);

 if (VAR_2 != FUNC_6()) {




  FUNC_8(&VAR_4->nn_lock);
  FUNC_1(&VAR_4->nn_timeout, 0);
  if (VAR_4->nn_persistent_error)
   FUNC_5(VAR_4, ((void*)0), 0, 0);
  FUNC_9(&VAR_4->nn_lock);
 }
}
