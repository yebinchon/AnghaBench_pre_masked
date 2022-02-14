
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_cache_t {struct buf_cache_t* prev; struct buf_cache_t* next; } ;



__attribute__((used)) static void FUNC_0(struct buf_cache_t *VAR_0, struct buf_cache_t *VAR_1)
{
 VAR_0->prev = VAR_1->prev;
 VAR_0->next = VAR_1;
 VAR_1->prev->next = VAR_0;
 VAR_1->prev = VAR_0;
}
