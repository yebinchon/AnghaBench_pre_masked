
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; int tail; } ;
struct io_rings {TYPE_1__ cq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static unsigned FUNC_2(struct io_rings *VAR_0)
{

 FUNC_1();
 return FUNC_0(VAR_0->cq.tail) - FUNC_0(VAR_0->cq.head);
}
