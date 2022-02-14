
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_data; } ;
struct udf_inode_info {TYPE_1__ i_ext; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, size_t VAR_3)
{
 struct udf_inode_info *VAR_4 = FUNC_0(VAR_2);
 VAR_4->i_ext.i_data = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4->i_ext.i_data)
  return -VAR_0;
 return 0;
}
