
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {unsigned int nf_hashval; unsigned int nf_may; int * nf_mark; scalar_t__ nf_flags; int nf_ref; struct inode* nf_inode; struct net* nf_net; int nf_cred; int * nf_file; int nf_lru; int nf_node; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 struct nfsd_file* FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct nfsd_file*) ;

__attribute__((used)) static struct nfsd_file *
FUNC_7(struct inode *VAR_8, unsigned int VAR_9, unsigned int VAR_10,
  struct net *VAR_11)
{
 struct nfsd_file *VAR_12;

 VAR_12 = FUNC_5(VAR_7, VAR_0);
 if (VAR_12) {
  FUNC_0(&VAR_12->nf_node);
  FUNC_1(&VAR_12->nf_lru);
  VAR_12->nf_file = ((void*)0);
  VAR_12->nf_cred = FUNC_4();
  VAR_12->nf_net = VAR_11;
  VAR_12->nf_flags = 0;
  VAR_12->nf_inode = VAR_8;
  VAR_12->nf_hashval = VAR_10;
  FUNC_3(&VAR_12->nf_ref, 1);
  VAR_12->nf_may = VAR_9 & VAR_3;
  if (VAR_9 & VAR_4) {
   if (VAR_9 & VAR_6)
    FUNC_2(VAR_2, &VAR_12->nf_flags);
   if (VAR_9 & VAR_5)
    FUNC_2(VAR_1, &VAR_12->nf_flags);
  }
  VAR_12->nf_mark = ((void*)0);
  FUNC_6(VAR_12);
 }
 return VAR_12;
}
