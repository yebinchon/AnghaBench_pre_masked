
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {int type; } ;
struct inode {int dummy; } ;
typedef int loff_t ;




 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,int ,int ) ;

__attribute__((used)) static loff_t
FUNC_1(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3,
        void *VAR_4, struct iomap *VAR_5)
{
 switch (VAR_5->type) {
 case 128:
  VAR_2 = FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_0);
  if (VAR_2 < 0)
   return VAR_3;

 case 129:
  *(loff_t *)VAR_4 = VAR_2;
  return 0;
 default:
  return VAR_3;
 }
}
