
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_desc_info {scalar_t__ next; scalar_t__ last; int alloc; int avail; int ring; int cur; } ;



__attribute__((used)) static void FUNC_0(struct ksz_desc_info *VAR_0)
{
 VAR_0->cur = VAR_0->ring;
 VAR_0->avail = VAR_0->alloc;
 VAR_0->last = VAR_0->next = 0;
}
