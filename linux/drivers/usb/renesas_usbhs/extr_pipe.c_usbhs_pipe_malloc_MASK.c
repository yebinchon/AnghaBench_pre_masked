
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int list; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ,int ,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct usbhs_priv*) ;
 int FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_6 (struct usbhs_pipe*) ;
 int FUNC_7 (struct usbhs_pipe*) ;
 int FUNC_8 (struct usbhs_pipe*) ;
 int FUNC_9 (struct usbhs_pipe*) ;
 struct device* FUNC_10 (struct usbhs_priv*) ;
 struct usbhs_pipe* FUNC_11 (struct usbhs_priv*,int) ;
 int FUNC_12 (struct usbhs_pipe*) ;
 int FUNC_13 (struct usbhs_pipe*,int,int ) ;
 int FUNC_14 (struct usbhs_pipe*,int,int ) ;
 int * VAR_0 ;
 int FUNC_15 (struct usbhs_pipe*) ;
 int FUNC_16 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_17 (struct usbhs_pipe*,int,int,int *) ;

struct usbhs_pipe *FUNC_18(struct usbhs_priv *VAR_1,
         int VAR_2,
         int VAR_3)
{
 struct device *VAR_4 = FUNC_10(VAR_1);
 struct usbhs_pipe *VAR_5;
 int VAR_6 = FUNC_3(VAR_1);
 int VAR_7;
 u16 VAR_8, VAR_9;

 VAR_5 = FUNC_11(VAR_1, VAR_2);
 if (!VAR_5) {
  FUNC_2(VAR_4, "can't get pipe (%s)\n",
   VAR_0[VAR_2]);
  return ((void*)0);
 }

 FUNC_0(&VAR_5->list);

 FUNC_5(VAR_5);


 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4, "pipe setup failed %d\n", FUNC_8(VAR_5));
  return ((void*)0);
 }

 if (FUNC_17(VAR_5, VAR_6, VAR_3, &VAR_8)) {
  FUNC_2(VAR_4, "can't setup pipe\n");
  return ((void*)0);
 }

 VAR_9 = FUNC_16(VAR_5);

 FUNC_15(VAR_5);
 FUNC_14(VAR_5, 0xFFFF, VAR_8);
 FUNC_13(VAR_5, 0xFFFF, VAR_9);
 FUNC_4(VAR_5);

 FUNC_9(VAR_5);

 FUNC_1(VAR_4, "enable pipe %d : %s (%s)\n",
  FUNC_8(VAR_5),
  FUNC_7(VAR_5),
  FUNC_6(VAR_5) ? "in" : "out");






 return VAR_5;
}
