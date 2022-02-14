
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int flag; TYPE_1__* direct_inode; } ;
struct TYPE_3__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*,scalar_t__,int ) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (char*,struct super_block*,scalar_t__*,int*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_4, int *VAR_5, char *VAR_6)
{
 s64 VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = FUNC_0(VAR_4)->flag;
 int VAR_10;

 FUNC_9(VAR_4);
 if (!FUNC_6(VAR_6, VAR_4, &VAR_7, &VAR_9))
  return -VAR_0;

 if (VAR_7) {
  if (FUNC_8(VAR_4)) {
   FUNC_7("JFS: resize requires volume to be mounted read-write\n");
   return -VAR_1;
  }
  VAR_8 = FUNC_3(VAR_4, VAR_7, 0);
  if (VAR_8)
   return VAR_8;
 }

 if (FUNC_8(VAR_4) && !(*VAR_5 & VAR_3)) {




  FUNC_10(FUNC_0(VAR_4)->direct_inode->i_mapping, 0);

  FUNC_0(VAR_4)->flag = VAR_9;
  VAR_10 = FUNC_4(VAR_4, 1);


  VAR_4->s_flags &= ~VAR_3;

  FUNC_1(VAR_4, -1);
  return VAR_10;
 }
 if (!FUNC_8(VAR_4) && (*VAR_5 & VAR_3)) {
  VAR_8 = FUNC_2(VAR_4, -1);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_5(VAR_4);
  FUNC_0(VAR_4)->flag = VAR_9;
  return VAR_8;
 }
 if ((FUNC_0(VAR_4)->flag & VAR_2) != (VAR_9 & VAR_2))
  if (!FUNC_8(VAR_4)) {
   VAR_8 = FUNC_5(VAR_4);
   if (VAR_8)
    return VAR_8;

   FUNC_0(VAR_4)->flag = VAR_9;
   VAR_10 = FUNC_4(VAR_4, 1);
   return VAR_10;
  }
 FUNC_0(VAR_4)->flag = VAR_9;

 return 0;
}
