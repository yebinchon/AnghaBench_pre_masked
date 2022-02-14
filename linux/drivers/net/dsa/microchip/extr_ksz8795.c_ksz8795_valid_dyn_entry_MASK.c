
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ksz_device*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ksz_device *VAR_6, u8 *VAR_7)
{
 int VAR_8 = 100;

 do {
  FUNC_0(VAR_6, VAR_5, VAR_7);
  VAR_8--;
 } while ((*VAR_7 & VAR_1) && VAR_8);


 if (*VAR_7 & VAR_1) {
  return -VAR_2;

 } else {
  FUNC_0(VAR_6, VAR_4, VAR_7);


  if (*VAR_7 & VAR_0)
   return -VAR_3;
 }
 return 0;
}
