
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_layout_mirror {int lock; int flags; int read_stat; } ;
struct inode {int dummy; } ;
typedef int ktime_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nfs4_ff_layout_mirror*,int *,int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct inode *VAR_2,
  struct nfs4_ff_layout_mirror *VAR_3,
  __u64 VAR_4, ktime_t VAR_5)
{
 bool VAR_6;

 FUNC_4(&VAR_3->lock);
 VAR_6 = FUNC_1(VAR_3, &VAR_3->read_stat, VAR_5);
 FUNC_0(&VAR_3->read_stat, VAR_4);
 FUNC_3(VAR_1, &VAR_3->flags);
 FUNC_5(&VAR_3->lock);

 if (VAR_6)
  FUNC_2(VAR_2, VAR_0);
}
