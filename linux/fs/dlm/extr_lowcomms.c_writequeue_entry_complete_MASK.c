
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writequeue_entry {int offset; scalar_t__ len; scalar_t__ users; int list; } ;


 int FUNC_0 (struct writequeue_entry*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct writequeue_entry *VAR_0, int VAR_1)
{
 VAR_0->offset += VAR_1;
 VAR_0->len -= VAR_1;

 if (VAR_0->len == 0 && VAR_0->users == 0) {
  FUNC_1(&VAR_0->list);
  FUNC_0(VAR_0);
 }
}
