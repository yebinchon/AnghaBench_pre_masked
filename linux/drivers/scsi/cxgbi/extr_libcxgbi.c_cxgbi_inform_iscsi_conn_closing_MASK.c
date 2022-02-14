
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {scalar_t__ state; int callback_lock; scalar_t__ user_data; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,char*,struct cxgbi_sock*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cxgbi_sock *VAR_3)
{
 FUNC_1(1 << VAR_1,
  "csk 0x%p, state %u, flags 0x%lx, conn 0x%p.\n",
  VAR_3, VAR_3->state, VAR_3->flags, VAR_3->user_data);

 if (VAR_3->state != VAR_0) {
  FUNC_2(&VAR_3->callback_lock);
  if (VAR_3->user_data)
   FUNC_0(VAR_3->user_data,
     VAR_2);
  FUNC_3(&VAR_3->callback_lock);
 }
}
