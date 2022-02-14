
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsdfec_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xsdfec_dev*,int ) ;
 int FUNC_2 (struct xsdfec_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct xsdfec_dev *VAR_7, bool VAR_8)
{
 u32 VAR_9;

 if (VAR_8) {

  FUNC_2(VAR_7, VAR_3,
    VAR_1);
  VAR_9 = FUNC_1(VAR_7, VAR_4);
  if (VAR_9 & VAR_1) {
   FUNC_0(VAR_7->dev,
    "SDFEC enabling ECC irq with ECC IER failed");
   return -VAR_0;
  }
 } else {

  FUNC_2(VAR_7, VAR_2,
    VAR_1);
  VAR_9 = FUNC_1(VAR_7, VAR_4);
  if (!(((VAR_9 & VAR_1) ==
         VAR_5) ||
        ((VAR_9 & VAR_1) ==
         VAR_6))) {
   FUNC_0(VAR_7->dev,
    "SDFEC disable ECC irq with ECC IDR failed");
   return -VAR_0;
  }
 }
 return 0;
}
