
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3_pci {int dev; scalar_t__ base; int map; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct v3_pci *VAR_6)
{
 unsigned int VAR_7;

 VAR_6->map =
  FUNC_7("arm,integrator-ap-syscon");
 if (FUNC_0(VAR_6->map)) {
  FUNC_1(VAR_6->dev, "no syscon\n");
  return -VAR_0;
 }

 FUNC_5(VAR_6->map, VAR_3, &VAR_7);

 FUNC_6(VAR_6->map, VAR_3,
       VAR_1 |
       VAR_2);

 if (!(VAR_7 & VAR_1)) {

  FUNC_3(230);


  FUNC_9(0x6200, VAR_6->base + VAR_4);


  do {
   FUNC_8(0xaa, VAR_6->base + VAR_5);
   FUNC_8(0x55, VAR_6->base + VAR_5 + 4);
  } while (FUNC_4(VAR_6->base + VAR_5) != 0xaa &&
    FUNC_4(VAR_6->base + VAR_5) != 0x55);
 }

 FUNC_2(VAR_6->dev, "initialized PCI V3 Integrator/AP integration\n");

 return 0;
}
