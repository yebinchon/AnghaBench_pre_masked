
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int a1; int intb; int lrout; int icop; int icon; int icip; int icin; int qout; int iout; int iqfs; int iqclk; int xout; int dout; int dfs; int dclk; } ;
struct si476x_core {TYPE_2__* client; TYPE_1__ pinmux; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct si476x_core*,int ) ;
 int FUNC_3 (struct si476x_core*,int ,int ,int ,int ) ;
 int FUNC_4 (struct si476x_core*,int ,int ,int ,int ) ;
 int FUNC_5 (struct si476x_core*,int ,int ) ;
 int FUNC_6 (struct si476x_core*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct si476x_core *VAR_0)
{
 int VAR_1;
 FUNC_0(&VAR_0->client->dev, "Configuring pinmux\n");
 VAR_1 = FUNC_3(VAR_0,
      VAR_0->pinmux.dclk,
      VAR_0->pinmux.dfs,
      VAR_0->pinmux.dout,
      VAR_0->pinmux.xout);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->client->dev,
   "Failed to configure digital audio pins(err = %d)\n",
   VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_6(VAR_0,
       VAR_0->pinmux.iqclk,
       VAR_0->pinmux.iqfs,
       VAR_0->pinmux.iout,
       VAR_0->pinmux.qout);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->client->dev,
   "Failed to configure ZIF pins(err = %d)\n",
   VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_4(VAR_0,
            VAR_0->pinmux.icin,
            VAR_0->pinmux.icip,
            VAR_0->pinmux.icon,
            VAR_0->pinmux.icop);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->client->dev,
   "Failed to configure IC-Link/GPO pins(err = %d)\n",
   VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0,
      VAR_0->pinmux.lrout);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->client->dev,
   "Failed to configure analog audio pins(err = %d)\n",
   VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_5(VAR_0,
        VAR_0->pinmux.intb,
        VAR_0->pinmux.a1);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->client->dev,
   "Failed to configure interrupt pins(err = %d)\n",
   VAR_1);
  return VAR_1;
 }

 return 0;
}
