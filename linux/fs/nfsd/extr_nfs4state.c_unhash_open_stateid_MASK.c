
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sc_client; } ;
struct nfs4_ol_stateid {TYPE_2__ st_stid; } ;
struct list_head {int dummy; } ;
struct TYPE_3__ {int cl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs4_ol_stateid*,struct list_head*) ;
 int FUNC_2 (struct nfs4_ol_stateid*) ;

__attribute__((used)) static bool FUNC_3(struct nfs4_ol_stateid *VAR_0,
    struct list_head *VAR_1)
{
 bool VAR_2;

 FUNC_0(&VAR_0->st_stid.sc_client->cl_lock);

 VAR_2 = FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_1);
 return VAR_2;
}
