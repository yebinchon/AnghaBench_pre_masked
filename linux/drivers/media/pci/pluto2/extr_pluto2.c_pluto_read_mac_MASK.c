
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pluto {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int*) ;
 int FUNC_1 (struct pluto*,int ) ;

__attribute__((used)) static void FUNC_2(struct pluto *VAR_3, u8 *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_4[0] = (VAR_5 >> 8) & 0xff;
 VAR_4[1] = (VAR_5 >> 0) & 0xff;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_4[2] = (VAR_5 >> 8) & 0xff;
 VAR_4[3] = (VAR_5 >> 0) & 0xff;

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_4[4] = (VAR_5 >> 8) & 0xff;
 VAR_4[5] = (VAR_5 >> 0) & 0xff;

 FUNC_0(&VAR_3->pdev->dev, "MAC %pM\n", VAR_4);
}
