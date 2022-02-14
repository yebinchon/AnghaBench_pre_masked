
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flags; } ;
struct hfsplus_inode_info {int userflags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct inode *VAR_6)
{
 struct hfsplus_inode_info *VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8 = 0;

 if (VAR_6->i_flags & VAR_5)
  VAR_8 |= VAR_1;
 if (VAR_6->i_flags & VAR_4)
  VAR_8 |= VAR_0;
 if (VAR_7->userflags & VAR_3)
  VAR_8 |= VAR_2;
 return VAR_8;
}
