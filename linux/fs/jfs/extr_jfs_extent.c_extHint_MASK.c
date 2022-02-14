
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flag; } ;
typedef TYPE_1__ xad_t ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef int s64 ;
struct TYPE_8__ {int nbperpage; int l2bsize; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct super_block*,char*) ;
 int FUNC_5 (struct inode*,int,int,int*,int*,int*,int ) ;

int FUNC_6(struct inode *VAR_3, s64 VAR_4, xad_t * VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 int VAR_7 = FUNC_0(VAR_6)->nbperpage;
 s64 VAR_8;
 int VAR_9 = 0;
 s64 VAR_10;
 int VAR_11;
 int VAR_12;


 FUNC_1(VAR_5, 0);




 VAR_8 = ((VAR_4 & ~VAR_1) >> FUNC_0(VAR_6)->l2bsize) - VAR_7;



 if (VAR_8 < 0)
  goto out;

 VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_7, &VAR_12, &VAR_10, &VAR_11, 0);

 if ((VAR_9 == 0) && VAR_11) {
  if (VAR_11 != VAR_7) {
   FUNC_4(VAR_3->i_sb, "corrupt xtree\n");
   VAR_9 = -VAR_0;
  }
  FUNC_1(VAR_5, VAR_10);
  FUNC_2(VAR_5, VAR_11);
  FUNC_3(VAR_5, VAR_8);




  VAR_5->flag = VAR_12 & VAR_2;
 } else
  VAR_9 = 0;

out:
 return (VAR_9);
}
