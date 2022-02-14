
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wait_queue_entry {int dummy; } ;
struct afs_server_list {int nr_servers; int preferred; TYPE_1__* servers; } ;
struct TYPE_4__ {unsigned int rtt; scalar_t__ responded; } ;
struct afs_server {unsigned long flags; int probe_wq; TYPE_2__ probe; } ;
struct TYPE_3__ {struct afs_server* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*,int,unsigned long) ;
 int FUNC_2 (int *,struct wait_queue_entry*) ;
 int FUNC_3 (int,int) ;
 int VAR_7 ;
 int FUNC_4 (struct wait_queue_entry*,int ) ;
 int FUNC_5 (struct wait_queue_entry*) ;
 struct wait_queue_entry* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,struct wait_queue_entry*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,unsigned long*) ;

int FUNC_12(struct afs_server_list *VAR_8, unsigned long VAR_9)
{
 struct wait_queue_entry *VAR_10;
 struct afs_server *VAR_11;
 unsigned int VAR_12 = VAR_6;
 bool VAR_13 = 0;
 int VAR_14 = -1, VAR_15;

 FUNC_1("%u,%lx", VAR_8->nr_servers, VAR_9);


 for (VAR_15 = 0; VAR_15 < VAR_8->nr_servers; VAR_15++) {
  if (FUNC_11(VAR_15, &VAR_9)) {
   VAR_11 = VAR_8->servers[VAR_15].server;
   if (!FUNC_11(VAR_0, &VAR_11->flags))
    FUNC_0(VAR_15, &VAR_9);
   if (VAR_11->probe.responded)
    VAR_13 = 1;
  }
 }
 if (VAR_13 || !VAR_9)
  return 0;

 VAR_10 = FUNC_6(FUNC_3(VAR_8->nr_servers, sizeof(*VAR_10)), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_8->nr_servers; VAR_15++) {
  if (FUNC_11(VAR_15, &VAR_9)) {
   VAR_11 = VAR_8->servers[VAR_15].server;
   FUNC_4(&VAR_10[VAR_15], VAR_7);
   FUNC_2(&VAR_11->probe_wq, &VAR_10[VAR_15]);
  }
 }

 for (;;) {
  bool VAR_16 = 0;

  FUNC_9(VAR_4);
  for (VAR_15 = 0; VAR_15 < VAR_8->nr_servers; VAR_15++) {
   if (FUNC_11(VAR_15, &VAR_9)) {
    VAR_11 = VAR_8->servers[VAR_15].server;
    if (VAR_11->probe.responded)
     goto stop;
    if (FUNC_11(VAR_0, &VAR_11->flags))
     VAR_16 = 1;
   }
  }

  if (!VAR_16 || FUNC_10(VAR_7))
   goto stop;
  FUNC_8();
 }

stop:
 FUNC_9(VAR_5);

 for (VAR_15 = 0; VAR_15 < VAR_8->nr_servers; VAR_15++) {
  if (FUNC_11(VAR_15, &VAR_9)) {
   VAR_11 = VAR_8->servers[VAR_15].server;
   if (VAR_11->probe.responded &&
       VAR_11->probe.rtt < VAR_12) {
    VAR_14 = VAR_15;
    VAR_12 = VAR_11->probe.rtt;
   }

   FUNC_7(&VAR_11->probe_wq, &VAR_10[VAR_15]);
  }
 }

 FUNC_5(VAR_10);

 if (VAR_14 == -1 && FUNC_10(VAR_7))
  return -VAR_2;

 if (VAR_14 >= 0)
  VAR_8->preferred = VAR_14;
 return 0;
}
