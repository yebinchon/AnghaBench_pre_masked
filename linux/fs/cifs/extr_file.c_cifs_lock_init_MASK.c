
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifsLockInfo {int block_q; int blist; int flags; int pid; int type; void* length; void* offset; } ;
typedef int __u8 ;
typedef void* __u64 ;
typedef int __u16 ;
struct TYPE_2__ {int tgid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 struct cifsLockInfo* FUNC_2 (int,int ) ;

__attribute__((used)) static struct cifsLockInfo *
FUNC_3(__u64 VAR_2, __u64 VAR_3, __u8 VAR_4, __u16 VAR_5)
{
 struct cifsLockInfo *VAR_6 =
  FUNC_2(sizeof(struct cifsLockInfo), VAR_0);
 if (!VAR_6)
  return VAR_6;
 VAR_6->offset = VAR_2;
 VAR_6->length = VAR_3;
 VAR_6->type = VAR_4;
 VAR_6->pid = VAR_1->tgid;
 VAR_6->flags = VAR_5;
 FUNC_0(&VAR_6->blist);
 FUNC_1(&VAR_6->block_q);
 return VAR_6;
}
