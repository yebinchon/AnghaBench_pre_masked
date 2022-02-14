
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_inode {unsigned long cache_validity; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_4__ {int (* have_delegation ) (struct inode*,int ) ;} ;
struct TYPE_3__ {scalar_t__ nrpages; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_8, unsigned long VAR_9)
{
 struct nfs_inode *VAR_10 = FUNC_0(VAR_8);
 bool VAR_11 = FUNC_1(VAR_8)->have_delegation(VAR_8, VAR_0);

 if (VAR_11) {
  if (!(VAR_9 & VAR_6))
   VAR_9 &= ~VAR_4;
  VAR_9 &= ~(VAR_2
    | VAR_5
    | VAR_7);
 }

 if (VAR_8->i_mapping->nrpages == 0)
  VAR_9 &= ~(VAR_3|VAR_1);
 VAR_10->cache_validity |= VAR_9;
 if (VAR_9 & VAR_3)
  FUNC_2(VAR_8);
}
