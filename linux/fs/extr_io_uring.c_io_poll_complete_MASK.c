
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_ring_ctx {int dummy; } ;
struct TYPE_2__ {int done; } ;
struct io_kiocb {int user_data; TYPE_1__ poll; } ;
typedef int __poll_t ;


 int FUNC_0 (struct io_ring_ctx*) ;
 int FUNC_1 (struct io_ring_ctx*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct io_ring_ctx *VAR_0, struct io_kiocb *VAR_1,
        __poll_t VAR_2)
{
 VAR_1->poll.done = 1;
 FUNC_1(VAR_0, VAR_1->user_data, FUNC_2(VAR_2));
 FUNC_0(VAR_0);
}
