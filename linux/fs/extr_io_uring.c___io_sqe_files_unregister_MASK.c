
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct io_ring_ctx {int nr_user_files; int * user_files; TYPE_1__* ring_sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct io_ring_ctx *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_user_files; VAR_1++)
  FUNC_0(VAR_0->user_files[VAR_1]);

}
