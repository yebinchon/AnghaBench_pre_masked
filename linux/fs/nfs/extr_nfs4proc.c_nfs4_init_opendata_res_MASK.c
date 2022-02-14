
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int access; int server; int seqid; } ;
struct TYPE_7__ {int access_request; int server; int seqid; int f_label; int * f_attr; } ;
struct TYPE_6__ {int seqid; } ;
struct TYPE_5__ {int seqid; } ;
struct nfs4_opendata {int group_name; int owner_name; int f_attr; TYPE_4__ o_arg; TYPE_3__ o_res; TYPE_2__ c_arg; TYPE_1__ c_res; int f_label; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_opendata *VAR_0)
{
 VAR_0->o_res.f_attr = &VAR_0->f_attr;
 VAR_0->o_res.f_label = VAR_0->f_label;
 VAR_0->o_res.seqid = VAR_0->o_arg.seqid;
 VAR_0->c_res.seqid = VAR_0->c_arg.seqid;
 VAR_0->o_res.server = VAR_0->o_arg.server;
 VAR_0->o_res.access_request = VAR_0->o_arg.access;
 FUNC_0(&VAR_0->f_attr);
 FUNC_1(&VAR_0->f_attr, &VAR_0->owner_name, &VAR_0->group_name);
}
