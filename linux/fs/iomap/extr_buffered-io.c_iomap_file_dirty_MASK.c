
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_ops {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*,scalar_t__,scalar_t__,int ,struct iomap_ops const*,int *,int ) ;
 int VAR_1 ;

int
FUNC_1(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
  const struct iomap_ops *VAR_5)
{
 loff_t VAR_6;

 while (VAR_4) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5, ((void*)0),
    VAR_1);
  if (VAR_6 <= 0)
   return VAR_6;
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
 }

 return 0;
}
