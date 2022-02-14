
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int dlist; } ;
struct hlist_head {int dummy; } ;
struct dentry {int d_fsdata; } ;


 int FUNC_0 (int *,struct hlist_head*) ;

__attribute__((used)) static inline void FUNC_1(struct dentry *VAR_0, struct p9_fid *VAR_1)
{
 FUNC_0(&VAR_1->dlist, (struct hlist_head *)&VAR_0->d_fsdata);
}
