
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_cache_t {struct buf_cache_t* next; struct buf_cache_t* prev; } ;



__attribute__((used)) static void FUNC_0(struct buf_cache_t *VAR_0, struct buf_cache_t *VAR_1)
{
 VAR_0->next = VAR_1->next;
 VAR_0->prev = VAR_1;
 VAR_1->next->prev = VAR_0;
 VAR_1->next = VAR_0;
}
