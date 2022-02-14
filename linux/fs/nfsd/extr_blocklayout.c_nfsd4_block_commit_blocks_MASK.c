
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tv_nsec; } ;
struct nfsd4_layoutcommit {scalar_t__ lc_last_wr; TYPE_3__ lc_mtime; } ;
struct iomap {int dummy; } ;
struct inode {TYPE_2__* i_sb; int i_mtime; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; TYPE_3__ ia_mtime; TYPE_3__ ia_ctime; TYPE_3__ ia_atime; } ;
typedef scalar_t__ loff_t ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* s_export_op; } ;
struct TYPE_5__ {int (* commit_blocks ) (struct inode*,struct iomap*,int,struct iattr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct iomap*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct iomap*,int,struct iattr*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;

__attribute__((used)) static __be32
FUNC_6(struct inode *VAR_5, struct nfsd4_layoutcommit *VAR_6,
  struct iomap *VAR_7, int VAR_8)
{
 loff_t VAR_9 = VAR_6->lc_last_wr + 1;
 struct iattr VAR_10 = { .ia_valid = 0 };
 int VAR_11;

 if (VAR_6->lc_mtime.tv_nsec == VAR_4 ||
     FUNC_5(&VAR_6->lc_mtime, &VAR_5->i_mtime) < 0)
  VAR_6->lc_mtime = FUNC_0(VAR_5);
 VAR_10.ia_valid |= VAR_0 | VAR_1 | VAR_2;
 VAR_10.ia_atime = VAR_10.ia_ctime = VAR_10.ia_mtime = VAR_6->lc_mtime;

 if (VAR_9 > FUNC_1(VAR_5)) {
  VAR_10.ia_valid |= VAR_3;
  VAR_10.ia_size = VAR_9;
 }

 VAR_11 = VAR_5->i_sb->s_export_op->commit_blocks(VAR_5, VAR_7,
   VAR_8, &VAR_10);
 FUNC_2(VAR_7);
 return FUNC_3(VAR_11);
}
