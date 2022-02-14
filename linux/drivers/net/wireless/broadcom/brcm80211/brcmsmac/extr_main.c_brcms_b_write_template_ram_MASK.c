
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcms_hardware {int unit; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;
typedef int __le32 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bcma_device*,int ) ;
 int FUNC_2 (struct bcma_device*,int ,int) ;
 int FUNC_3 (struct bcma_device*,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int*,void*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_7(struct brcms_hardware *VAR_4, int VAR_5, int VAR_6,
       void *VAR_7)
{
 struct bcma_device *VAR_8 = VAR_4->d11core;
 u32 VAR_9;
 __le32 VAR_10;
 __be32 VAR_11;
 bool VAR_12;
 FUNC_3(VAR_8, "wl%d\n", VAR_4->unit);

 FUNC_2(VAR_8, FUNC_0(VAR_3), VAR_5);





 VAR_12 = (FUNC_1(VAR_8, FUNC_0(VAR_1)) & VAR_0) != 0;

 while (VAR_6 > 0) {
  FUNC_6(&VAR_9, VAR_7, sizeof(u32));

  if (VAR_12) {
   VAR_11 = FUNC_4(VAR_9);
   VAR_9 = *(u32 *)&VAR_11;
  } else {
   VAR_10 = FUNC_5(VAR_9);
   VAR_9 = *(u32 *)&VAR_10;
  }

  FUNC_2(VAR_8, FUNC_0(VAR_2), VAR_9);

  VAR_7 = (u8 *) VAR_7 + sizeof(u32);
  VAR_6 -= sizeof(u32);
 }
}
