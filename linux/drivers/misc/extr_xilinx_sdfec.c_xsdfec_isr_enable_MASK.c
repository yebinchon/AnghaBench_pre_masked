
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xsdfec_dev*,int ) ;
 int FUNC_2 (struct xsdfec_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct xsdfec_dev *VAR_5, bool VAR_6)
{
 u32 VAR_7;

 if (VAR_6) {

  FUNC_2(VAR_5, VAR_2, VAR_4);
  VAR_7 = FUNC_1(VAR_5, VAR_3);
  if (VAR_7 & VAR_4) {
   FUNC_0(VAR_5->dev,
    "SDFEC enabling irq with IER failed");
   return -VAR_0;
  }
 } else {

  FUNC_2(VAR_5, VAR_1, VAR_4);
  VAR_7 = FUNC_1(VAR_5, VAR_3);
  if ((VAR_7 & VAR_4) != VAR_4) {
   FUNC_0(VAR_5->dev,
    "SDFEC disabling irq with IDR failed");
   return -VAR_0;
  }
 }
 return 0;
}
