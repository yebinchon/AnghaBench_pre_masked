
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writequeue_entry {int users; scalar_t__ offset; scalar_t__ end; scalar_t__ len; struct connection* con; } ;
struct connection {int writequeue_lock; int swork; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_1)
{
 struct writequeue_entry *VAR_2 = (struct writequeue_entry *)VAR_1;
 struct connection *VAR_3 = VAR_2->con;
 int VAR_4;

 FUNC_1(&VAR_3->writequeue_lock);
 VAR_4 = --VAR_2->users;
 if (VAR_4)
  goto out;
 VAR_2->len = VAR_2->end - VAR_2->offset;
 FUNC_2(&VAR_3->writequeue_lock);

 FUNC_0(VAR_0, &VAR_3->swork);
 return;

out:
 FUNC_2(&VAR_3->writequeue_lock);
 return;
}
