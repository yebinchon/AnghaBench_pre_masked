
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_queue_entry {size_t len; void* buf; } ;


 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (struct ntb_queue_entry*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct ntb_queue_entry *VAR_0, void *VAR_1)
{
 void *VAR_2 = VAR_0->buf;
 size_t VAR_3 = VAR_0->len;

 FUNC_0(VAR_2, VAR_1, VAR_3);


 FUNC_2();

 FUNC_1(VAR_0, ((void*)0));
}
