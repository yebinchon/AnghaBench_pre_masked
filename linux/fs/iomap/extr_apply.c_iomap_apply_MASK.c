
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_ops {scalar_t__ (* iomap_begin ) (struct inode*,scalar_t__,scalar_t__,unsigned int,struct iomap*) ;scalar_t__ (* iomap_end ) (struct inode*,scalar_t__,scalar_t__,scalar_t__,unsigned int,struct iomap*) ;} ;
struct iomap {scalar_t__ offset; scalar_t__ length; int member_0; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ (* iomap_actor_t ) (struct inode*,scalar_t__,scalar_t__,void*,struct iomap*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__,scalar_t__,unsigned int,struct iomap*) ;
 scalar_t__ FUNC_2 (struct inode*,scalar_t__,scalar_t__,scalar_t__,unsigned int,struct iomap*) ;

loff_t
FUNC_3(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3, unsigned VAR_4,
  const struct iomap_ops *VAR_5, void *VAR_6, iomap_actor_t VAR_7)
{
 struct iomap VAR_8 = { 0 };
 loff_t VAR_9 = 0, VAR_10;
 VAR_10 = VAR_5->iomap_begin(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8);
 if (VAR_10)
  return VAR_10;
 if (FUNC_0(VAR_8.offset > VAR_2))
  return -VAR_0;
 if (FUNC_0(VAR_8.length == 0))
  return -VAR_0;





 if (VAR_8.offset + VAR_8.length < VAR_2 + VAR_3)
  VAR_3 = VAR_8.offset + VAR_8.length - VAR_2;






 VAR_9 = VAR_7(VAR_1, VAR_2, VAR_3, VAR_6, &VAR_8);





 if (VAR_5->iomap_end) {
  VAR_10 = VAR_5->iomap_end(VAR_1, VAR_2, VAR_3,
         VAR_9 > 0 ? VAR_9 : 0,
         VAR_4, &VAR_8);
 }

 return VAR_9 ? VAR_9 : VAR_10;
}
