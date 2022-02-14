
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct inode {int i_size; int i_mode; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*,int) ;

__attribute__((used)) static inline loff_t FUNC_3(struct inode *VAR_0, ulong VAR_1,
     int VAR_2)
{
 if (FUNC_1(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode)) {
  return VAR_0->i_size +
      (loff_t) (FUNC_2(VAR_0, VAR_2));
 }
 return ((loff_t) FUNC_2(VAR_0, VAR_2)) +
     (((loff_t) VAR_1) << 9);
}
