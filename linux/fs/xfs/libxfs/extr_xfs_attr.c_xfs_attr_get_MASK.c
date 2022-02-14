
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_inode {int i_mount; } ;
struct xfs_da_args {unsigned char* value; int valuelen; int op_flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct xfs_da_args*,struct xfs_inode*,unsigned char const*,int) ;
 int FUNC_5 (struct xfs_inode*,struct xfs_da_args*) ;
 int FUNC_6 (struct xfs_inode*) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int VAR_5 ;

int
FUNC_8(
 struct xfs_inode *VAR_6,
 const unsigned char *VAR_7,
 unsigned char **VAR_8,
 int *VAR_9,
 int VAR_10)
{
 struct xfs_da_args VAR_11;
 uint VAR_12;
 int VAR_13;

 FUNC_0((VAR_10 & (VAR_0 | VAR_1)) || *VAR_8);

 FUNC_2(VAR_6->i_mount, VAR_5);

 if (FUNC_1(VAR_6->i_mount))
  return -VAR_2;

 VAR_13 = FUNC_4(&VAR_11, VAR_6, VAR_7, VAR_10);
 if (VAR_13)
  return VAR_13;


 VAR_11.op_flags = VAR_4;
 if (VAR_10 & VAR_0)
  VAR_11.op_flags |= VAR_3;
 else
  VAR_11.value = *VAR_8;
 VAR_11.valuelen = *VAR_9;

 VAR_12 = FUNC_6(VAR_6);
 VAR_13 = FUNC_5(VAR_6, &VAR_11);
 FUNC_7(VAR_6, VAR_12);
 *VAR_9 = VAR_11.valuelen;


 if (VAR_13) {
  if (VAR_10 & VAR_0) {
   FUNC_3(VAR_11.value);
   *VAR_8 = ((void*)0);
  }
  return VAR_13;
 }
 *VAR_8 = VAR_11.value;
 return 0;
}
