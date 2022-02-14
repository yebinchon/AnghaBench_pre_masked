
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_page {int wb_verf; } ;
struct TYPE_8__ {int * data; } ;
struct TYPE_7__ {TYPE_4__ verifier; } ;
struct TYPE_6__ {scalar_t__ tk_status; } ;
struct TYPE_5__ {int next; } ;
struct nfs_commit_data {TYPE_3__ verf; TYPE_2__ task; TYPE_1__ pages; } ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 struct nfs_page* FUNC_1 (int ) ;

void FUNC_2(struct nfs_commit_data *VAR_0)
{
 struct nfs_page *VAR_1 = FUNC_1(VAR_0->pages.next);

 VAR_0->task.tk_status = 0;
 FUNC_0(&VAR_0->verf.verifier, &VAR_1->wb_verf,
        sizeof(VAR_0->verf.verifier));
 VAR_0->verf.verifier.data[0]++;
}
