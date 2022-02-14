
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; int i_ctime; int i_mtime; int i_sb; int i_mode; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int VAR_4 ;
 int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int ,scalar_t__,int ) ;
 int FUNC_19 (struct inode*,int) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_5, loff_t VAR_6)
{
 int VAR_7;

 if (!(FUNC_7(VAR_5->i_mode) || FUNC_5(VAR_5->i_mode) ||
     FUNC_6(VAR_5->i_mode)))
  return -VAR_0;
 if (FUNC_13(VAR_5))
  return -VAR_0;
 if (FUNC_1(VAR_5) || FUNC_3(VAR_5))
  return -VAR_1;

 FUNC_14(VAR_5);

 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_16(VAR_5, VAR_6,
      FUNC_4(VAR_6) - VAR_6, ((void*)0),
      &VAR_4);
 } else if (FUNC_21(VAR_5->i_sb, VAR_2))
  VAR_7 = FUNC_18(VAR_5->i_mapping,
    VAR_6, VAR_3);
 else
  VAR_7 = FUNC_9(VAR_5->i_mapping,
    VAR_6, VAR_3);
 if (VAR_7)
  return VAR_7;

 FUNC_11(FUNC_0(VAR_5));
 FUNC_22(VAR_5, VAR_6);
 FUNC_8(VAR_5, VAR_6);
 FUNC_12(FUNC_0(VAR_5));

 VAR_5->i_mtime = VAR_5->i_ctime = FUNC_10(VAR_5);
 if (FUNC_15(VAR_5)) {
  FUNC_20(VAR_5->i_mapping);
  FUNC_19(VAR_5, 1);
 } else {
  FUNC_17(VAR_5);
 }

 return 0;
}
