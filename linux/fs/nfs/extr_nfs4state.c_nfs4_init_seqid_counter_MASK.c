
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_seqid_counter {int wait; int list; int lock; scalar_t__ counter; scalar_t__ flags; int create_time; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nfs_seqid_counter *VAR_0)
{
 VAR_0->create_time = FUNC_1();
 VAR_0->flags = 0;
 VAR_0->counter = 0;
 FUNC_3(&VAR_0->lock);
 FUNC_0(&VAR_0->list);
 FUNC_2(&VAR_0->wait, "Seqid_waitqueue");
}
