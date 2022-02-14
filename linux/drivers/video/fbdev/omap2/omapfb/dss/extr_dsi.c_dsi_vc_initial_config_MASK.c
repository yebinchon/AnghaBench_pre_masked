
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {int source; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 struct dsi_data* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct platform_device*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct platform_device *VAR_2, int VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_5(VAR_2);
 u32 VAR_5;

 FUNC_1("Initial config of virtual channel %d", VAR_3);

 VAR_5 = FUNC_6(VAR_2, FUNC_0(VAR_3));

 if (FUNC_3(VAR_5, 15, 15))
  FUNC_2("VC(%d) busy when trying to configure it!\n",
    VAR_3);

 VAR_5 = FUNC_4(VAR_5, 0, 1, 1);
 VAR_5 = FUNC_4(VAR_5, 0, 2, 2);
 VAR_5 = FUNC_4(VAR_5, 0, 3, 3);
 VAR_5 = FUNC_4(VAR_5, 0, 4, 4);
 VAR_5 = FUNC_4(VAR_5, 1, 7, 7);
 VAR_5 = FUNC_4(VAR_5, 1, 8, 8);
 VAR_5 = FUNC_4(VAR_5, 0, 9, 9);
 if (FUNC_8(VAR_1))
  VAR_5 = FUNC_4(VAR_5, 3, 11, 10);

 VAR_5 = FUNC_4(VAR_5, 4, 29, 27);
 VAR_5 = FUNC_4(VAR_5, 4, 23, 21);

 FUNC_7(VAR_2, FUNC_0(VAR_3), VAR_5);

 VAR_4->vc[VAR_3].source = VAR_0;
}
