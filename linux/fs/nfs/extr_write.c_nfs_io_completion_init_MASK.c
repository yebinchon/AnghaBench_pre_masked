
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_io_completion {void (* complete ) (void*) ;int refcount; void* data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfs_io_completion *VAR_0,
  void (*VAR_1)(void *), void *VAR_2)
{
 VAR_0->complete = VAR_1;
 VAR_0->data = VAR_2;
 FUNC_0(&VAR_0->refcount);
}
