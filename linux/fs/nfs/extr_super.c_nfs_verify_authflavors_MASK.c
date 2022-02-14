
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* flavors; } ;
struct nfs_parsed_mount_data {scalar_t__ selected_flavor; TYPE_1__ auth_info; } ;
typedef scalar_t__ rpc_authflavor_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct nfs_parsed_mount_data *VAR_4,
   rpc_authflavor_t *VAR_5, unsigned int VAR_6)
{
 rpc_authflavor_t VAR_7 = VAR_2;
 bool VAR_8 = 0;
 unsigned int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_7 = VAR_5[VAR_9];

  if (FUNC_1(&VAR_4->auth_info, VAR_7))
   goto out;

  if (VAR_7 == VAR_3)
   VAR_8 = 1;
 }

 if (VAR_8) {
  VAR_7 = VAR_4->auth_info.flavors[0];
  goto out;
 }

 FUNC_0(VAR_1,
   "NFS: specified auth flavors not supported by server\n");
 return -VAR_0;

out:
 VAR_4->selected_flavor = VAR_7;
 FUNC_0(VAR_1, "NFS: using auth flavor %u\n", VAR_4->selected_flavor);
 return 0;
}
