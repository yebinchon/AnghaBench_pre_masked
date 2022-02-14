
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {unsigned long cache_validity; unsigned long read_cache_jiffies; int attr_gencount; int attrtimeo_timestamp; } ;
struct nfs4_change_info {scalar_t__ before; int after; scalar_t__ atomic; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct inode *VAR_8, struct nfs4_change_info *VAR_9,
  unsigned long VAR_10, unsigned long VAR_11)
{
 struct nfs_inode *VAR_12 = FUNC_0(VAR_8);

 VAR_12->cache_validity |= VAR_3
  | VAR_5
  | VAR_4
  | VAR_11;
 if (VAR_9->atomic && VAR_9->before == FUNC_1(VAR_8)) {
  VAR_12->cache_validity &= ~VAR_6;
  VAR_12->attrtimeo_timestamp = VAR_7;
 } else {
  FUNC_3(VAR_8);
  if (VAR_9->before != FUNC_1(VAR_8))
   VAR_12->cache_validity |= VAR_0 |
    VAR_1;
 }
 FUNC_2(VAR_8, VAR_9->after);
 VAR_12->read_cache_jiffies = VAR_10;
 VAR_12->attr_gencount = FUNC_5();
 VAR_12->cache_validity &= ~VAR_2;
 FUNC_4(VAR_8);
}
