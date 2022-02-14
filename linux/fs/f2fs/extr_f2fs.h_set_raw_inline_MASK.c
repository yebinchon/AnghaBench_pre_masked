
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_inode {int i_inline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct inode*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_14, struct f2fs_inode *VAR_15)
{
 VAR_15->i_inline = 0;

 if (FUNC_0(VAR_14, VAR_12))
  VAR_15->i_inline |= VAR_5;
 if (FUNC_0(VAR_14, VAR_9))
  VAR_15->i_inline |= VAR_2;
 if (FUNC_0(VAR_14, VAR_10))
  VAR_15->i_inline |= VAR_3;
 if (FUNC_0(VAR_14, VAR_7))
  VAR_15->i_inline |= VAR_0;
 if (FUNC_0(VAR_14, VAR_11))
  VAR_15->i_inline |= VAR_4;
 if (FUNC_0(VAR_14, VAR_8))
  VAR_15->i_inline |= VAR_1;
 if (FUNC_0(VAR_14, VAR_13))
  VAR_15->i_inline |= VAR_6;
}
