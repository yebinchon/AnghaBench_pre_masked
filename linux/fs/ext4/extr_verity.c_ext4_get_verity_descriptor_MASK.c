
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,size_t*,int *) ;
 int FUNC_1 (struct inode*,void*,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, void *VAR_2,
          size_t VAR_3)
{
 size_t VAR_4 = 0;
 u64 VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3) {
  if (VAR_4 > VAR_3)
   return -VAR_0;
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 }
 return VAR_4;
}
