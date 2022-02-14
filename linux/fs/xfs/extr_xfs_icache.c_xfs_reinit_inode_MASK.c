
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct xfs_mount {int m_super; } ;
struct inode {int i_rdev; int i_mode; int i_generation; int i_nlink; } ;
typedef int dev_t ;


 int FUNC_0 (int ,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_mount *VAR_0,
 struct inode *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3 = VAR_1->i_nlink;
 uint32_t VAR_4 = VAR_1->i_generation;
 uint64_t VAR_5 = FUNC_1(VAR_1);
 umode_t VAR_6 = VAR_1->i_mode;
 dev_t VAR_7 = VAR_1->i_rdev;

 VAR_2 = FUNC_0(VAR_0->m_super, VAR_1);

 FUNC_3(VAR_1, VAR_3);
 VAR_1->i_generation = VAR_4;
 FUNC_2(VAR_1, VAR_5);
 VAR_1->i_mode = VAR_6;
 VAR_1->i_rdev = VAR_7;
 return VAR_2;
}
