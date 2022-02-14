
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hl_device*,int ) ;

int FUNC_2(struct hl_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "Failed to disable PCI access from CPU\n");

 return VAR_2;
}
