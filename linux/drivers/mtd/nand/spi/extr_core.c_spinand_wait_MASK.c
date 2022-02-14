
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct spinand_device*,int*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct spinand_device *VAR_3, u8 *VAR_4)
{
 unsigned long VAR_5 = VAR_2 + FUNC_0(400);
 u8 VAR_6;
 int VAR_7;

 do {
  VAR_7 = FUNC_1(VAR_3, &VAR_6);
  if (VAR_7)
   return VAR_7;

  if (!(VAR_6 & VAR_1))
   goto out;
 } while (FUNC_2(VAR_2, VAR_5));





 VAR_7 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

out:
 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_6 & VAR_1 ? -VAR_0 : 0;
}
