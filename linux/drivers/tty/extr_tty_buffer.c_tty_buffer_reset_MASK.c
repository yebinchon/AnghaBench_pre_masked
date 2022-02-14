
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_buffer {size_t size; scalar_t__ flags; scalar_t__ read; scalar_t__ commit; int * next; scalar_t__ used; } ;



__attribute__((used)) static void FUNC_0(struct tty_buffer *VAR_0, size_t VAR_1)
{
 VAR_0->used = 0;
 VAR_0->size = VAR_1;
 VAR_0->next = ((void*)0);
 VAR_0->commit = 0;
 VAR_0->read = 0;
 VAR_0->flags = 0;
}
