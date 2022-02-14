
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_xattr_header {scalar_t__ h_checksum; } ;
struct buffer_head {int b_blocknr; } ;


 struct ext4_xattr_header* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*,int ,struct ext4_xattr_header*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
     struct buffer_head *VAR_1)
{
 struct ext4_xattr_header *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 1;

 if (FUNC_1(VAR_0->i_sb)) {
  FUNC_3(VAR_1);
  VAR_3 = (VAR_2->h_checksum == FUNC_2(VAR_0,
       VAR_1->b_blocknr, VAR_2));
  FUNC_4(VAR_1);
 }
 return VAR_3;
}
