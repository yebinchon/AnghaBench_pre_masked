
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {int protocol; } ;
struct nfs_parsed_mount_data {TYPE_2__ mount_server; TYPE_1__ nfs_server; } ;





 int FUNC_0 (struct nfs_parsed_mount_data*) ;

__attribute__((used)) static void FUNC_1(struct nfs_parsed_mount_data *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->mount_server.protocol == 128 ||
     VAR_0->mount_server.protocol == 129)
   return;
 switch (VAR_0->nfs_server.protocol) {
 case 128:
  VAR_0->mount_server.protocol = 128;
  break;
 case 129:
 case 130:
  VAR_0->mount_server.protocol = 129;
 }
}
