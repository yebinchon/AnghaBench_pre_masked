
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct TYPE_2__ {struct iov_iter* iter; } ;
struct iomap_dio {int flags; size_t size; TYPE_1__ submit; } ;
struct iomap {scalar_t__ inline_data; } ;
struct inode {scalar_t__ i_size; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__,scalar_t__,struct iov_iter*) ;
 size_t FUNC_2 (scalar_t__,scalar_t__,struct iov_iter*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static loff_t
FUNC_7(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
  struct iomap_dio *VAR_5, struct iomap *VAR_6)
{
 struct iov_iter *VAR_7 = VAR_5->submit.iter;
 size_t VAR_8;

 FUNC_0(VAR_3 + VAR_4 > VAR_1 - FUNC_6(VAR_6->inline_data));

 if (VAR_5->flags & VAR_0) {
  loff_t VAR_9 = VAR_2->i_size;

  if (VAR_3 > VAR_9)
   FUNC_5(VAR_6->inline_data + VAR_9, 0, VAR_3 - VAR_9);
  VAR_8 = FUNC_1(VAR_6->inline_data + VAR_3, VAR_4, VAR_7);
  if (VAR_8) {
   if (VAR_3 + VAR_8 > VAR_9)
    FUNC_3(VAR_2, VAR_3 + VAR_8);
   FUNC_4(VAR_2);
  }
 } else {
  VAR_8 = FUNC_2(VAR_6->inline_data + VAR_3, VAR_4, VAR_7);
 }
 VAR_5->size += VAR_8;
 return VAR_8;
}
