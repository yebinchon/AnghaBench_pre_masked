
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int protocol; void* port; } ;
struct TYPE_5__ {void* port; } ;
struct nfs_parsed_mount_data {int need_mount; int * lsm_opts; int net; scalar_t__ minorversion; int selected_flavor; TYPE_2__ nfs_server; TYPE_1__ mount_server; int acdirmax; int acdirmin; int acregmax; int acregmin; int retrans; int timeo; } ;
struct TYPE_8__ {TYPE_3__* nsproxy; } ;
struct TYPE_7__ {int net_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 struct nfs_parsed_mount_data* FUNC_0 (int,int ) ;

__attribute__((used)) static struct nfs_parsed_mount_data *FUNC_1(void)
{
 struct nfs_parsed_mount_data *VAR_11;

 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_0);
 if (VAR_11) {
  VAR_11->timeo = VAR_7;
  VAR_11->retrans = VAR_6;
  VAR_11->acregmin = VAR_4;
  VAR_11->acregmax = VAR_3;
  VAR_11->acdirmin = VAR_2;
  VAR_11->acdirmax = VAR_1;
  VAR_11->mount_server.port = VAR_5;
  VAR_11->nfs_server.port = VAR_5;
  VAR_11->nfs_server.protocol = VAR_9;
  VAR_11->selected_flavor = VAR_8;
  VAR_11->minorversion = 0;
  VAR_11->need_mount = 1;
  VAR_11->net = VAR_10->nsproxy->net_ns;
  VAR_11->lsm_opts = ((void*)0);
 }
 return VAR_11;
}
