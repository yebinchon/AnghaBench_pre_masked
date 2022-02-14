
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_adi {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sprd_adi *VAR_4)
{
 u32 VAR_5 = VAR_0;
 u32 VAR_6;

 do {
  VAR_6 = FUNC_2(VAR_4->base + VAR_3);
  if (VAR_6 & VAR_1)
   break;

  FUNC_0();
 } while (--VAR_5);

 if (VAR_5 == 0) {
  FUNC_1(VAR_4->dev, "drain write fifo timeout\n");
  return -VAR_2;
 }

 return 0;
}
