
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_4__ {int rtt; } ;
struct afs_vlserver {TYPE_2__ probe; int probe_outstanding; int lock; int addresses; int name; } ;
struct afs_net {int dummy; } ;
struct afs_error {int dummy; } ;
struct afs_call {int dummy; } ;
struct afs_addr_cursor {scalar_t__ index; int abort_code; TYPE_1__* alist; } ;
struct TYPE_3__ {scalar_t__ nr_addrs; } ;


 int FUNC_0 (struct afs_call*) ;
 int FUNC_1 (struct afs_call*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct afs_error*,int ,int ) ;
 int FUNC_4 (struct afs_call*) ;
 struct afs_call* FUNC_5 (struct afs_net*,struct afs_addr_cursor*,struct key*,struct afs_vlserver*,unsigned int) ;
 int FUNC_6 (struct afs_vlserver*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool FUNC_13(struct afs_net *VAR_1,
      struct afs_vlserver *VAR_2,
      struct key *VAR_3,
      unsigned int VAR_4,
      struct afs_error *VAR_5)
{
 struct afs_addr_cursor VAR_6 = {
  .index = 0,
 };
 struct afs_call *VAR_7;
 bool VAR_8 = 0;

 FUNC_2("%s", VAR_2->name);

 FUNC_11(&VAR_2->lock);
 VAR_6.alist = FUNC_10(VAR_2->addresses,
          FUNC_8(&VAR_2->lock));
 FUNC_12(&VAR_2->lock);

 FUNC_7(&VAR_2->probe_outstanding, VAR_6.alist->nr_addrs);
 FUNC_9(&VAR_2->probe, 0, sizeof(VAR_2->probe));
 VAR_2->probe.rtt = VAR_0;

 for (VAR_6.index = 0; VAR_6.index < VAR_6.alist->nr_addrs; VAR_6.index++) {
  VAR_7 = FUNC_5(VAR_1, &VAR_6, VAR_3, VAR_2,
            VAR_4);
  if (!FUNC_0(VAR_7)) {
   FUNC_4(VAR_7);
   VAR_8 = 1;
  } else {
   FUNC_3(VAR_5, FUNC_1(VAR_7), VAR_6.abort_code);
  }
 }

 if (!VAR_8)
  FUNC_6(VAR_2);
 return VAR_8;
}
