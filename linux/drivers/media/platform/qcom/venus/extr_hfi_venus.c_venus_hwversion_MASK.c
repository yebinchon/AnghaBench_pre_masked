
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_hfi_device {TYPE_1__* core; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int,int,int) ;
 int FUNC_1 (struct venus_hfi_device*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct venus_hfi_device *VAR_6)
{
 struct device *VAR_7 = VAR_6->core->dev;
 u32 VAR_8 = FUNC_1(VAR_6, VAR_0);
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = VAR_8 & VAR_1;
 VAR_9 = VAR_9 >> VAR_2;
 VAR_10 = VAR_8 & VAR_3;
 VAR_10 = VAR_10 >> VAR_4;
 VAR_11 = VAR_8 & VAR_5;

 FUNC_0(VAR_7, "venus hw version %x.%x.%x\n", VAR_9, VAR_10, VAR_11);

 return VAR_9;
}
