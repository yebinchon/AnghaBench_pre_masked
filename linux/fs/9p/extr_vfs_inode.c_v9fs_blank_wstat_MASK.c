
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; int version; int type; } ;
struct p9_wstat {int * extension; void* n_muid; int n_gid; void* n_uid; int * muid; int * gid; int * uid; int * name; int length; int mtime; int atime; int mode; TYPE_1__ qid; int dev; int type; } ;


 int VAR_0 ;
 void* VAR_1 ;

void
FUNC_0(struct p9_wstat *VAR_2)
{
 VAR_2->type = ~0;
 VAR_2->dev = ~0;
 VAR_2->qid.type = ~0;
 VAR_2->qid.version = ~0;
 *((long long *)&VAR_2->qid.path) = ~0;
 VAR_2->mode = ~0;
 VAR_2->atime = ~0;
 VAR_2->mtime = ~0;
 VAR_2->length = ~0;
 VAR_2->name = ((void*)0);
 VAR_2->uid = ((void*)0);
 VAR_2->gid = ((void*)0);
 VAR_2->muid = ((void*)0);
 VAR_2->n_uid = VAR_1;
 VAR_2->n_gid = VAR_0;
 VAR_2->n_muid = VAR_1;
 VAR_2->extension = ((void*)0);
}
