
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_2 (struct usbhs_pipe*) ;
 struct device* FUNC_3 (struct usbhs_priv*) ;
 int FUNC_4 (struct usbhs_pipe*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct usbhs_pipe *VAR_2 = VAR_1;
 struct usbhs_priv *VAR_3 = FUNC_2(VAR_2);
 struct device *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_0);
 if (VAR_5 < 0)
  FUNC_0(VAR_4, "dma_complete run_error %d : %d\n",
   FUNC_1(VAR_2), VAR_5);
}
