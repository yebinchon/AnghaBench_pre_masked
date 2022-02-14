
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protocol; } ;
struct nfs_parsed_mount_data {TYPE_1__ nfs_server; } ;






__attribute__((used)) static void FUNC_0(struct nfs_parsed_mount_data *VAR_0)
{
 switch (VAR_0->nfs_server.protocol) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  VAR_0->nfs_server.protocol = 129;
 }
}
