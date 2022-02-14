
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct udf_inode_info {int i_extraPerms; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;

void FUNC_1(struct inode *VAR_4, umode_t VAR_5)
{
 struct udf_inode_info *VAR_6 = FUNC_0(VAR_4);





 VAR_6->i_extraPerms &= ~VAR_0;
 if (VAR_5 & 0200)
  VAR_6->i_extraPerms |= VAR_3;
 if (VAR_5 & 0020)
  VAR_6->i_extraPerms |= VAR_1;
 if (VAR_5 & 0002)
  VAR_6->i_extraPerms |= VAR_2;
}
