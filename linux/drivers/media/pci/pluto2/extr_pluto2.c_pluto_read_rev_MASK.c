
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pluto {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct pluto*,int ) ;

__attribute__((used)) static void FUNC_2(struct pluto *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2, VAR_1) & VAR_0;
 FUNC_0(&VAR_2->pdev->dev, "board revision %d.%d\n",
   (VAR_3 >> 12) & 0x0f, (VAR_3 >> 4) & 0xff);
}
