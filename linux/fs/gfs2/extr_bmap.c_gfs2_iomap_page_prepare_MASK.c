
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {int dummy; } ;
struct inode {unsigned int i_blkbits; } ;
struct gfs2_sbd {int dummy; } ;
typedef unsigned int loff_t ;


 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, loff_t VAR_2,
       unsigned VAR_3, struct iomap *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_1) - 1;
 struct gfs2_sbd *VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7;

 VAR_7 = ((VAR_2 & VAR_5) + VAR_3 + VAR_5) >> VAR_1->i_blkbits;
 return FUNC_1(VAR_6, VAR_0 + VAR_7, 0);
}
