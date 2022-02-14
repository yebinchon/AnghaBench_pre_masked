
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flag; } ;
typedef TYPE_1__ xad_t ;
struct jfs_sb_info {int l2nbperpage; } ;
struct inode {int i_sb; } ;
typedef int s64 ;
struct TYPE_11__ {int commit_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_9__* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*,int,int) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*,int,int*,int*) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (int ,struct inode*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,struct inode*,int,int,int ) ;
 int FUNC_20 (int ,struct inode*,int,int,int,int*,int ) ;

int
FUNC_21(struct inode *VAR_3, s64 VAR_4, s64 VAR_5, xad_t * VAR_6, bool VAR_7)
{
 struct jfs_sb_info *VAR_8 = FUNC_2(VAR_3->i_sb);
 s64 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14;
 int VAR_15;


 FUNC_18(VAR_3->i_sb);


 FUNC_14(&FUNC_1(VAR_3)->commit_mutex);


 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;


 VAR_11 = VAR_5 << VAR_8->l2nbperpage;


 if ((VAR_12 = FUNC_6(VAR_6))) {

  VAR_9 = FUNC_12(VAR_6);
  if (FUNC_16(VAR_6) + VAR_9 == VAR_11 &&
      VAR_7 == ((VAR_6->flag & VAR_2) ? 1 : 0))
   VAR_13 = VAR_12 + VAR_9;


  VAR_12 += (VAR_9 - 1);
 }
 VAR_9 = VAR_4;
 if ((VAR_14 = FUNC_10(VAR_3, VAR_12 ? VAR_12 : FUNC_0(VAR_3), &VAR_9, &VAR_10))) {
  FUNC_15(&FUNC_1(VAR_3)->commit_mutex);
  return (VAR_14);
 }


 VAR_14 = FUNC_8(VAR_3, VAR_9);
 if (VAR_14) {
  FUNC_7(VAR_3, VAR_10, (s64) VAR_9);
  FUNC_15(&FUNC_1(VAR_3)->commit_mutex);
  return VAR_14;
 }


 VAR_15 = VAR_7 ? VAR_2 : 0;





 if (VAR_13 && VAR_13 == VAR_10)
  VAR_14 = FUNC_19(0, VAR_3, VAR_11, (int) VAR_9, 0);
 else
  VAR_14 = FUNC_20(0, VAR_3, VAR_15, VAR_11, (int) VAR_9, &VAR_10, 0);




 if (VAR_14) {
  FUNC_7(VAR_3, VAR_10, VAR_9);
  FUNC_9(VAR_3, VAR_9);
  FUNC_15(&FUNC_1(VAR_3)->commit_mutex);
  return (VAR_14);
 }


 FUNC_3(VAR_6, VAR_10);
 FUNC_4(VAR_6, VAR_9);
 FUNC_5(VAR_6, VAR_11);
 VAR_6->flag = VAR_15;

 FUNC_13(VAR_3);

 FUNC_15(&FUNC_1(VAR_3)->commit_mutex);





 if (FUNC_17(VAR_0,VAR_3))
  FUNC_11(VAR_3, 0);

 return (0);
}
