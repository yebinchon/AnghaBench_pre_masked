
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_hfi_device {int irq_status; } ;
struct venus_core {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct venus_hfi_device* FUNC_0 (struct venus_core*) ;
 int FUNC_1 (struct venus_hfi_device*,int ) ;
 int FUNC_2 (struct venus_hfi_device*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct venus_core *VAR_8)
{
 struct venus_hfi_device *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10;

 if (!VAR_9)
  return VAR_2;

 VAR_10 = FUNC_1(VAR_9, VAR_5);

 if (VAR_10 & VAR_7 ||
     VAR_10 & VAR_6 ||
     VAR_10 & VAR_1)
  VAR_9->irq_status = VAR_10;

 FUNC_2(VAR_9, VAR_0, 1);
 FUNC_2(VAR_9, VAR_4, VAR_10);

 return VAR_3;
}
