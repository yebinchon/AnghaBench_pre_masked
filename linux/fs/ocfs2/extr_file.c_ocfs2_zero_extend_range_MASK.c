
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__,struct buffer_head*) ;
 int FUNC_5 (unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, u64 VAR_3,
       u64 VAR_4, struct buffer_head *VAR_5)
{
 int VAR_6 = 0;
 u64 VAR_7;
 u64 VAR_8 = VAR_3;

 FUNC_5(
   (unsigned long long)FUNC_1(VAR_2)->ip_blkno,
   (unsigned long long)VAR_3,
   (unsigned long long)VAR_4);
 FUNC_0(VAR_3 >= VAR_4);

 while (VAR_8 < VAR_4) {
  VAR_7 = (VAR_8 & VAR_0) + VAR_1;
  if (VAR_7 > VAR_4)
   VAR_7 = VAR_4;
  VAR_6 = FUNC_4(VAR_2, VAR_8, VAR_7, VAR_5);
  if (VAR_6 < 0) {
   FUNC_3(VAR_6);
   break;
  }
  VAR_8 = VAR_7;





  FUNC_2();
 }

 return VAR_6;
}
