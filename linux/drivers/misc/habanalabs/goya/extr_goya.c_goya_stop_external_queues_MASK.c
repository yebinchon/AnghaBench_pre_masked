
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hl_device*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_2(struct hl_device *VAR_16)
{
 int VAR_17, VAR_18 = 0;

 VAR_17 = FUNC_1(VAR_16,
   VAR_2,
   VAR_1,
   VAR_3);

 if (VAR_17) {
  FUNC_0(VAR_16->dev, "failed to stop DMA QMAN 0\n");
  VAR_18 = -VAR_0;
 }

 VAR_17 = FUNC_1(VAR_16,
   VAR_5,
   VAR_4,
   VAR_6);

 if (VAR_17) {
  FUNC_0(VAR_16->dev, "failed to stop DMA QMAN 1\n");
  VAR_18 = -VAR_0;
 }

 VAR_17 = FUNC_1(VAR_16,
   VAR_8,
   VAR_7,
   VAR_9);

 if (VAR_17) {
  FUNC_0(VAR_16->dev, "failed to stop DMA QMAN 2\n");
  VAR_18 = -VAR_0;
 }

 VAR_17 = FUNC_1(VAR_16,
   VAR_11,
   VAR_10,
   VAR_12);

 if (VAR_17) {
  FUNC_0(VAR_16->dev, "failed to stop DMA QMAN 3\n");
  VAR_18 = -VAR_0;
 }

 VAR_17 = FUNC_1(VAR_16,
   VAR_14,
   VAR_13,
   VAR_15);

 if (VAR_17) {
  FUNC_0(VAR_16->dev, "failed to stop DMA QMAN 4\n");
  VAR_18 = -VAR_0;
 }

 return VAR_18;
}
