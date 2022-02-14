
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk_error_queue; int sk_write_queue; } ;
struct tun_file {TYPE_1__ sk; int tx_ring; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct tun_file *VAR_0)
{
 void *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->tx_ring)) != ((void*)0))
  FUNC_2(VAR_1);

 FUNC_1(&VAR_0->sk.sk_write_queue);
 FUNC_1(&VAR_0->sk.sk_error_queue);
}
