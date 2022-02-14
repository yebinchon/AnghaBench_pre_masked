
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtd_info {unsigned long size; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_6__ {scalar_t__ i_dataoffset; } ;
struct TYPE_5__ {struct mtd_info* s_mtd; } ;
struct TYPE_4__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 unsigned long FUNC_1 (struct inode*) ;
 int FUNC_2 (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct file *VAR_5,
          unsigned long VAR_6,
          unsigned long VAR_7,
          unsigned long VAR_8,
          unsigned long VAR_9)
{
 struct inode *VAR_10 = VAR_5->f_mapping->host;
 struct mtd_info *VAR_11 = VAR_10->i_sb->s_mtd;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;

 if (!VAR_11)
  return (unsigned long) -VAR_1;


 VAR_15 = (VAR_7 + VAR_4 - 1) >> VAR_3;
 VAR_12 = FUNC_1(VAR_10);
 VAR_13 = VAR_8 << VAR_3;

 VAR_14 = (VAR_12 + VAR_4 - 1) >> VAR_3;
 if ((VAR_8 >= VAR_14) || (VAR_14 - VAR_8 < VAR_15))
  return (unsigned long) -VAR_0;

 if (VAR_6 != 0)
  return (unsigned long) -VAR_0;

 if (VAR_7 > VAR_11->size || VAR_8 >= (VAR_11->size >> VAR_3))
  return (unsigned long) -VAR_0;

 VAR_13 += FUNC_0(VAR_10)->i_dataoffset;
 if (VAR_13 >= VAR_11->size)
  return (unsigned long) -VAR_0;

 if ((VAR_13 + VAR_7) > VAR_11->size)
  VAR_7 = VAR_11->size - VAR_13;

 VAR_16 = FUNC_2(VAR_11, VAR_7, VAR_13, VAR_9);
 if (VAR_16 == -VAR_2)
  VAR_16 = -VAR_1;
 return (unsigned long) VAR_16;
}
