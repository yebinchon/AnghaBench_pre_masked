
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_ops {int dummy; } ;
struct inode {int i_blkbits; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct address_space*) ;
 unsigned int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int,unsigned int,int ,struct iomap_ops const*,int*,int ) ;
 int VAR_0 ;

sector_t
FUNC_3(struct address_space *VAR_1, sector_t VAR_2,
  const struct iomap_ops *VAR_3)
{
 struct inode *VAR_4 = VAR_1->host;
 loff_t VAR_5 = VAR_2 << VAR_4->i_blkbits;
 unsigned VAR_6 = FUNC_1(VAR_4);

 if (FUNC_0(VAR_1))
  return 0;

 VAR_2 = 0;
 FUNC_2(VAR_4, VAR_5, VAR_6, 0, VAR_3, &VAR_2, VAR_0);
 return VAR_2;
}
