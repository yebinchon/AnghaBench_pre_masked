
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct buf_cache_t {TYPE_2__* hash_prev; TYPE_1__* hash_next; } ;
struct TYPE_4__ {TYPE_1__* hash_next; } ;
struct TYPE_3__ {TYPE_2__* hash_prev; } ;



__attribute__((used)) static void FUNC_0(struct buf_cache_t *VAR_0)
{
 (VAR_0->hash_prev)->hash_next = VAR_0->hash_next;
 (VAR_0->hash_next)->hash_prev = VAR_0->hash_prev;
}
