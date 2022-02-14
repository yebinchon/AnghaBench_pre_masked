
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hl_device {int dev; } ;
typedef int desc ;


 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (struct hl_device*) ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_0, u16 VAR_1,
    bool VAR_2)
{
 char VAR_3[20] = "";

 FUNC_1(VAR_1, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_0->dev, "Received H/W interrupt %d [\"%s\"]\n",
  VAR_1, VAR_3);

 if (VAR_2) {
  FUNC_3(VAR_0);
  FUNC_2(VAR_0);
 }
}
