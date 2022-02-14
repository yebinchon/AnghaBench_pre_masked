
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_2 (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_3(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7, VAR_8;
 unsigned int VAR_9;

 while (VAR_4) {
  VAR_6 = FUNC_1(VAR_1, VAR_3, &VAR_7,
      &VAR_8, &VAR_9);
  if (VAR_6) {
   FUNC_0(VAR_6);
   break;
  }

  if (VAR_4 < VAR_8)
   VAR_8 = VAR_4;

  if (VAR_9 & VAR_0) {
   VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3,
            VAR_8, VAR_5);
   if (VAR_6) {
    FUNC_0(VAR_6);
    break;
   }
  }

  VAR_4 -= VAR_8;
  VAR_3 += VAR_8;
 }

 return VAR_6;
}
