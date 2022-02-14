
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct key {int dummy; } ;
struct afs_vldb_entry {int nr_servers; int* fs_mask; int * fs_server; } ;
struct afs_server_list {int nr_servers; TYPE_1__* servers; int lock; int usage; } ;
struct afs_server_entry {int dummy; } ;
struct afs_server {int uuid; } ;
struct afs_cell {int net; } ;
struct TYPE_3__ {struct afs_server* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct afs_server_list* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct afs_server*) ;
 int FUNC_2 (struct afs_server*) ;
 struct afs_server* FUNC_3 (struct afs_cell*,struct key*,int *) ;
 int FUNC_4 (int ,struct afs_server*,int ) ;
 int FUNC_5 (int ,struct afs_server_list*) ;
 int VAR_5 ;
 struct afs_server_list* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (struct afs_server_list*,int ,int) ;

struct afs_server_list *FUNC_12(struct afs_cell *VAR_7,
           struct key *VAR_8,
           struct afs_vldb_entry *VAR_9,
           u8 VAR_10)
{
 struct afs_server_list *VAR_11;
 struct afs_server *VAR_12;
 int VAR_13 = -VAR_3, VAR_14 = 0, VAR_15, VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_9->nr_servers; VAR_15++)
  if (VAR_9->fs_mask[VAR_15] & VAR_10)
   VAR_14++;

 VAR_11 = FUNC_6(FUNC_11(VAR_11, VAR_6, VAR_14), VAR_4);
 if (!VAR_11)
  goto error;

 FUNC_9(&VAR_11->usage, 1);
 FUNC_10(&VAR_11->lock);


 for (VAR_15 = 0; VAR_15 < VAR_9->nr_servers; VAR_15++) {
  if (!(VAR_9->fs_mask[VAR_15] & VAR_10))
   continue;

  VAR_12 = FUNC_3(VAR_7, VAR_8, &VAR_9->fs_server[VAR_15]);
  if (FUNC_1(VAR_12)) {
   VAR_13 = FUNC_2(VAR_12);
   if (VAR_13 == -VAR_1 ||
       VAR_13 == -VAR_2)
    continue;
   goto error_2;
  }


  for (VAR_16 = 0; VAR_16 < VAR_11->nr_servers; VAR_16++)
   if (FUNC_7(&VAR_11->servers[VAR_16].server->uuid,
       &VAR_12->uuid,
       sizeof(VAR_12->uuid)) >= 0)
    break;
  if (VAR_16 < VAR_11->nr_servers) {
   if (VAR_11->servers[VAR_16].server == VAR_12) {
    FUNC_4(VAR_7->net, VAR_12,
            VAR_5);
    continue;
   }

   FUNC_8(VAR_11->servers + VAR_16 + 1,
    VAR_11->servers + VAR_16,
    (VAR_11->nr_servers - VAR_16) * sizeof(struct afs_server_entry));
  }

  VAR_11->servers[VAR_16].server = VAR_12;
  VAR_11->nr_servers++;
 }

 if (VAR_11->nr_servers == 0) {
  VAR_13 = -VAR_0;
  goto error_2;
 }

 return VAR_11;

error_2:
 FUNC_5(VAR_7->net, VAR_11);
error:
 return FUNC_0(VAR_13);
}
