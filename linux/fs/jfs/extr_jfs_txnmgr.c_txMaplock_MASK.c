
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tid_t ;
struct tlock {int type; scalar_t__ next; int lock; int * mp; struct inode* ip; int flag; scalar_t__ tid; } ;
struct tblock {void* last; void* next; } ;
struct maplock {scalar_t__ index; scalar_t__ maxcnt; scalar_t__ next; } ;
struct jfs_inode_info {scalar_t__ atlhead; int anon_inode_list; void* atltail; } ;
struct inode {int i_mode; } ;
typedef void* lid_t ;
struct TYPE_2__ {int anon_list; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 struct tlock* FUNC_4 (void*) ;
 int FUNC_5 (int *,int *) ;
 struct tblock* FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_7 () ;

struct tlock *FUNC_8(tid_t VAR_3, struct inode *VAR_4, int VAR_5)
{
 struct jfs_inode_info *VAR_6 = FUNC_0(VAR_4);
 lid_t VAR_7;
 struct tblock *VAR_8;
 struct tlock *VAR_9;
 struct maplock *VAR_10;

 FUNC_2();




 VAR_7 = FUNC_7();
 VAR_9 = FUNC_4(VAR_7);




 VAR_9->tid = VAR_3;


 VAR_9->flag = VAR_2;
 if (FUNC_1(VAR_4->i_mode))
  VAR_9->flag |= VAR_1;
 VAR_9->ip = VAR_4;
 VAR_9->mp = ((void*)0);

 VAR_9->type = VAR_5;





 if (VAR_3) {
  VAR_8 = FUNC_6(VAR_3);
  if (VAR_8->next)
   FUNC_4(VAR_8->last)->next = VAR_7;
  else
   VAR_8->next = VAR_7;
  VAR_9->next = 0;
  VAR_8->last = VAR_7;
 }



 else {
  VAR_9->next = VAR_6->atlhead;
  VAR_6->atlhead = VAR_7;
  if (VAR_9->next == 0) {

   VAR_6->atltail = VAR_7;
   FUNC_5(&VAR_6->anon_inode_list,
          &VAR_0.anon_list);
  }
 }

 FUNC_3();


 VAR_10 = (struct maplock *) & VAR_9->lock;
 VAR_10->next = 0;
 VAR_10->maxcnt = 0;
 VAR_10->index = 0;

 return VAR_9;
}
