
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct inode {int i_mode; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,int) ;

__attribute__((used)) static inline ulong FUNC_4(struct inode *VAR_0, int VAR_1)
{
 loff_t VAR_2 = FUNC_2(VAR_0);
 loff_t VAR_3 = FUNC_3(VAR_0, VAR_1);


 if (FUNC_1(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode)) {
  VAR_2 += (loff_t) 511;
 }






 if (VAR_2 < VAR_3)
  return 0;
 return (VAR_2 - VAR_3) >> 9;
}
