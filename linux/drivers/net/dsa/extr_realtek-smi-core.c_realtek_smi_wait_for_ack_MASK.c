
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct realtek_smi {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct realtek_smi*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct realtek_smi *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 do {
  u32 VAR_4;

  FUNC_1(VAR_2, 1, &VAR_4);
  if (VAR_4 == 0)
   break;

  if (++VAR_3 > VAR_1) {
   FUNC_0(VAR_2->dev, "ACK timeout\n");
   return -VAR_0;
  }
 } while (1);

 return 0;
}
