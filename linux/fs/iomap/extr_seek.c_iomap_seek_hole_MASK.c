
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_ops {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__,scalar_t__,int ,struct iomap_ops const*,scalar_t__*,int ) ;
 int VAR_2 ;

loff_t
FUNC_2(struct inode *VAR_3, loff_t VAR_4, const struct iomap_ops *VAR_5)
{
 loff_t VAR_6 = FUNC_0(VAR_3);
 loff_t VAR_7 = VAR_6 - VAR_4;
 loff_t VAR_8;


 if (VAR_4 < 0 || VAR_4 >= VAR_6)
  return -VAR_0;

 while (VAR_7 > 0) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7, VAR_1, VAR_5,
      &VAR_4, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_8 == 0)
   break;

  VAR_4 += VAR_8;
  VAR_7 -= VAR_8;
 }

 return VAR_4;
}
