
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; } ;
struct io_rings {TYPE_1__ sq; } ;
struct io_ring_ctx {unsigned int cached_sq_head; struct io_rings* rings; } ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct io_ring_ctx *VAR_0)
{
 struct io_rings *VAR_1 = VAR_0->rings;


 return FUNC_0(&VAR_1->sq.tail) - VAR_0->cached_sq_head;
}
