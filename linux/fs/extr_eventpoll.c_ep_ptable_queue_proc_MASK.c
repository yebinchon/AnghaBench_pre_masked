
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct file {int dummy; } ;
struct eppoll_entry {int llink; int wait; struct epitem* base; int * whead; } ;
struct TYPE_2__ {int events; } ;
struct epitem {int nwait; int pwqlist; TYPE_1__ event; } ;
typedef int poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct epitem* FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 struct eppoll_entry* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct file *VAR_4, wait_queue_head_t *VAR_5,
     poll_table *VAR_6)
{
 struct epitem *VAR_7 = FUNC_2(VAR_6);
 struct eppoll_entry *VAR_8;

 if (VAR_7->nwait >= 0 && (VAR_8 = FUNC_4(VAR_3, VAR_1))) {
  FUNC_3(&VAR_8->wait, VAR_2);
  VAR_8->whead = VAR_5;
  VAR_8->base = VAR_7;
  if (VAR_7->event.events & VAR_0)
   FUNC_1(VAR_5, &VAR_8->wait);
  else
   FUNC_0(VAR_5, &VAR_8->wait);
  FUNC_5(&VAR_8->llink, &VAR_7->pwqlist);
  VAR_7->nwait++;
 } else {

  VAR_7->nwait = -1;
 }
}
