
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct macb {TYPE_2__* dev; TYPE_1__* pdev; } ;
typedef int addr ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (struct macb*,scalar_t__) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static void FUNC_5(struct macb *VAR_2)
{
 u32 VAR_3;
 u16 VAR_4;
 u8 VAR_5[6];
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_3 = FUNC_3(VAR_2, VAR_0 + VAR_6 * 8);
  VAR_4 = FUNC_3(VAR_2, VAR_1 + VAR_6 * 8);

  VAR_5[0] = VAR_3 & 0xff;
  VAR_5[1] = (VAR_3 >> 8) & 0xff;
  VAR_5[2] = (VAR_3 >> 16) & 0xff;
  VAR_5[3] = (VAR_3 >> 24) & 0xff;
  VAR_5[4] = VAR_4 & 0xff;
  VAR_5[5] = (VAR_4 >> 8) & 0xff;

  if (FUNC_2(VAR_5)) {
   FUNC_4(VAR_2->dev->dev_addr, VAR_5, sizeof(VAR_5));
   return;
  }
 }

 FUNC_0(&VAR_2->pdev->dev, "invalid hw address, using random\n");
 FUNC_1(VAR_2->dev);
}
