
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct afs_volume {scalar_t__ name_len; int type; TYPE_1__* cell; int servers_lock; int flags; scalar_t__ update_at; scalar_t__ servers_seq; struct afs_vldb_entry* servers; int name; int vid; } ;
struct afs_vldb_entry {scalar_t__ name_len; scalar_t__ seq; int name; } ;
struct afs_server_list {scalar_t__ name_len; scalar_t__ seq; int name; } ;
struct TYPE_3__ {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct afs_vldb_entry*) ;
 int FUNC_1 (struct afs_vldb_entry*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 struct afs_vldb_entry* FUNC_4 (TYPE_1__*,struct key*,struct afs_vldb_entry*,int) ;
 scalar_t__ FUNC_5 (struct afs_vldb_entry*,struct afs_vldb_entry*) ;
 int FUNC_6 (int ,struct afs_vldb_entry*) ;
 struct afs_vldb_entry* FUNC_7 (TYPE_1__*,struct key*,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct afs_vldb_entry*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct afs_volume *VAR_3, struct key *VAR_4)
{
 struct afs_server_list *VAR_5, *VAR_6, *VAR_7;
 struct afs_vldb_entry *VAR_8;
 char VAR_9[16];
 int VAR_10, VAR_11;

 FUNC_2("");




 VAR_11 = FUNC_14(VAR_9, "%llu", VAR_3->vid);

 VAR_8 = FUNC_7(VAR_3->cell, VAR_4, VAR_9, VAR_11);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto error;
 }


 if (VAR_8->name_len != VAR_3->name_len ||
     FUNC_11(VAR_8->name, VAR_3->name, VAR_8->name_len) != 0) {

  FUNC_12(VAR_3->name, VAR_8->name, VAR_0);
  VAR_3->name_len = VAR_8->name_len;
 }


 VAR_5 = FUNC_4(VAR_3->cell, VAR_4,
        VAR_8, (1 << VAR_3->type));
 if (FUNC_0(VAR_5)) {
  VAR_10 = FUNC_1(VAR_5);
  goto error_vldb;
 }

 FUNC_15(&VAR_3->servers_lock);

 VAR_7 = VAR_5;
 VAR_6 = VAR_3->servers;
 if (FUNC_5(VAR_5, VAR_6)) {
  VAR_5->seq = VAR_3->servers_seq + 1;
  VAR_3->servers = VAR_5;
  FUNC_13();
  VAR_3->servers_seq++;
  VAR_7 = VAR_6;
 }

 VAR_3->update_at = FUNC_10() + VAR_2;
 FUNC_8(VAR_1, &VAR_3->flags);
 FUNC_16(&VAR_3->servers_lock);
 VAR_10 = 0;

 FUNC_6(VAR_3->cell->net, VAR_7);
error_vldb:
 FUNC_9(VAR_8);
error:
 FUNC_3(" = %d", VAR_10);
 return VAR_10;
}
