
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_atime; int i_version; } ;
struct ext4_inode_info {unsigned long i_flags; int i_disksize; int i_data; } ;
typedef int loff_t ;


 unsigned long VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_2, struct inode *VAR_3)
{
 loff_t VAR_4;
 struct ext4_inode_info *VAR_5;
 struct ext4_inode_info *VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_0(VAR_3);

 FUNC_5(VAR_2->i_version, VAR_3->i_version);
 FUNC_5(VAR_2->i_atime, VAR_3->i_atime);
 FUNC_5(VAR_2->i_mtime, VAR_3->i_mtime);

 FUNC_4(VAR_5->i_data, VAR_6->i_data, sizeof(VAR_5->i_data));
 VAR_7 = VAR_5->i_flags & VAR_0;
 VAR_5->i_flags = (VAR_6->i_flags & VAR_0) |
  (VAR_5->i_flags & ~VAR_0);
 VAR_6->i_flags = VAR_7 | (VAR_6->i_flags & ~VAR_0);
 FUNC_5(VAR_5->i_disksize, VAR_6->i_disksize);
 FUNC_1(VAR_2, 0, VAR_1);
 FUNC_1(VAR_3, 0, VAR_1);

 VAR_4 = FUNC_2(VAR_2);
 FUNC_3(VAR_2, FUNC_2(VAR_3));
 FUNC_3(VAR_3, VAR_4);
}
