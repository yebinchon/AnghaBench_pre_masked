
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_dio {int flags; } ;
struct iomap {int type; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ,int ,struct iomap_dio*,struct iomap*) ;
 int FUNC_2 (int ,struct iomap_dio*) ;
 int FUNC_3 (struct inode*,int ,int ,struct iomap_dio*,struct iomap*) ;

__attribute__((used)) static loff_t
FUNC_4(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
  void *VAR_5, struct iomap *VAR_6)
{
 struct iomap_dio *VAR_7 = VAR_5;

 switch (VAR_6->type) {
 case 131:
  if (FUNC_0(VAR_7->flags & VAR_1))
   return -VAR_0;
  return FUNC_2(VAR_4, VAR_7);
 case 128:
  if (!(VAR_7->flags & VAR_1))
   return FUNC_2(VAR_4, VAR_7);
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
 case 129:
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
 case 130:
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
 default:
  FUNC_0(1);
  return -VAR_0;
 }
}
