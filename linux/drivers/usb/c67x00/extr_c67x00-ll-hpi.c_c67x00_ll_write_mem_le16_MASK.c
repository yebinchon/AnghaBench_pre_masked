
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct c67x00_device {TYPE_1__* pdev; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct c67x00_device*,int) ;
 int FUNC_2 (struct c67x00_device*,int,int) ;
 int FUNC_3 (struct c67x00_device*,int,int *,int) ;

void FUNC_4(struct c67x00_device *VAR_0, u16 VAR_1,
         void *VAR_2, int VAR_3)
{
 u8 *VAR_4 = VAR_2;


 if (VAR_1 + VAR_3 > 0xffff) {
  FUNC_0(&VAR_0->pdev->dev,
   "Trying to write beyond writable region!\n");
  return;
 }

 if (VAR_1 & 0x01) {

  u16 VAR_5;
  VAR_5 = FUNC_1(VAR_0, VAR_1 - 1);
  VAR_5 = (VAR_5 & 0x00ff) | (*VAR_4++ << 8);
  FUNC_2(VAR_0, VAR_1 - 1, VAR_5);
  VAR_1++;
  VAR_3--;
 }

 FUNC_3(VAR_0, VAR_1, (__le16 *)VAR_4, VAR_3 / 2);
 VAR_4 += VAR_3 & ~0x01;
 VAR_1 += VAR_3 & ~0x01;
 VAR_3 &= 0x01;

 if (VAR_3) {
  u16 VAR_6;
  VAR_6 = FUNC_1(VAR_0, VAR_1);
  VAR_6 = (VAR_6 & 0xff00) | *VAR_4;
  FUNC_2(VAR_0, VAR_1, VAR_6);
 }
}
