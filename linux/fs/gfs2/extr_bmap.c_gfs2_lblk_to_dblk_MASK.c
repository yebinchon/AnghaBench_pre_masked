
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct metapath {int mp_aheight; } ;
struct iomap {int addr; } ;
struct inode {int i_blkbits; } ;
typedef int loff_t ;


 int FUNC_0 (struct inode*,int,int ,int ,struct iomap*,struct metapath*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct metapath*) ;

int FUNC_3(struct inode *VAR_0, u32 VAR_1, u64 *VAR_2)
{
 struct iomap VAR_3 = { };
 struct metapath VAR_4 = { .mp_aheight = 1, };
 loff_t VAR_5 = (loff_t)VAR_1 << VAR_0->i_blkbits;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_5, FUNC_1(VAR_0), 0, &VAR_3, &VAR_4);
 FUNC_2(&VAR_4);
 if (VAR_6 == 0)
  *VAR_2 = VAR_3.addr >> VAR_0->i_blkbits;

 return VAR_6;
}
