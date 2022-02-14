
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int flags; int runtime_flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,struct page*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct inode*,struct page*,scalar_t__,scalar_t__,int*,unsigned long*,int) ;
 int FUNC_3 (struct inode*,struct page*,scalar_t__,scalar_t__,int*,unsigned long*,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct inode*,struct page*,scalar_t__,scalar_t__,int*,int,unsigned long*) ;
 int FUNC_8 (int ,int *) ;
 unsigned int FUNC_9 (struct writeback_control*) ;

int FUNC_10(struct inode *VAR_3, struct page *VAR_4,
  u64 VAR_5, u64 VAR_6, int *VAR_7, unsigned long *VAR_8,
  struct writeback_control *VAR_9)
{
 int VAR_10;
 int VAR_11 = FUNC_6(VAR_3, VAR_5, VAR_6);
 unsigned int VAR_12 = FUNC_9(VAR_9);

 if (FUNC_0(VAR_3)->flags & VAR_1 && !VAR_11) {
  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, 1, VAR_8);
 } else if (FUNC_0(VAR_3)->flags & VAR_2 && !VAR_11) {
  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, 0, VAR_8);
 } else if (!FUNC_4(VAR_3) ||
     !FUNC_5(VAR_3, VAR_5, VAR_6)) {
  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, 1);
 } else {
  FUNC_8(VAR_0,
   &FUNC_0(VAR_3)->runtime_flags);
  VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8,
        VAR_12);
 }
 if (VAR_10)
  FUNC_1(VAR_3, VAR_4, VAR_5,
           VAR_6 - VAR_5 + 1);
 return VAR_10;
}
