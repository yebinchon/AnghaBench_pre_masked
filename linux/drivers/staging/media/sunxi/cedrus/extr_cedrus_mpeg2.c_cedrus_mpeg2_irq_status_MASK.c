
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cedrus_dev {int dummy; } ;
struct cedrus_ctx {struct cedrus_dev* dev; } ;
typedef enum cedrus_irq_status { ____Placeholder_cedrus_irq_status } cedrus_irq_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cedrus_dev*,int ) ;

__attribute__((used)) static enum cedrus_irq_status FUNC_1(struct cedrus_ctx *VAR_7)
{
 struct cedrus_dev *VAR_8 = VAR_7->dev;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_3);
 VAR_9 &= VAR_5;

 if (!VAR_9)
  return VAR_1;

 if (VAR_9 & VAR_4 ||
     !(VAR_9 & VAR_6))
  return VAR_0;

 return VAR_2;
}
