
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct usbhs_pipe* usbhsh_hpriv_to_dcp ;
struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int * mod_private; } ;
struct renesas_usbhs_driver_pipe_config {int type; } ;


 int VAR_0 ;
 struct renesas_usbhs_driver_pipe_config* VAR_1 ;
 int VAR_2 ;
 struct usbhs_pipe* FUNC_0 (struct usbhs_priv*) ;
 struct renesas_usbhs_driver_pipe_config* FUNC_1 (struct usbhs_priv*,int ) ;
 struct usbhs_pipe* FUNC_2 (struct usbhs_priv*,int,int) ;
 struct usbhsh_hpriv* FUNC_3 (struct usbhs_priv*) ;

__attribute__((used)) static void FUNC_4(struct usbhs_priv *VAR_3)
{
 struct usbhsh_hpriv *VAR_4 = FUNC_3(VAR_3);
 struct usbhs_pipe *VAR_5;
 struct renesas_usbhs_driver_pipe_config *VAR_6 =
     FUNC_1(VAR_3, VAR_6);
 int VAR_7 = FUNC_1(VAR_3, VAR_7);
 int VAR_8, VAR_9, VAR_10;


 VAR_8 = VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = (VAR_6[VAR_10].type == VAR_8);
  VAR_8 = VAR_6[VAR_10].type;

  if (VAR_0 == VAR_6[VAR_10].type) {
   VAR_5 = FUNC_0(VAR_3);
   usbhsh_hpriv_to_dcp(VAR_11) = VAR_5;
  } else {
   VAR_5 = FUNC_2(VAR_3,
       VAR_6[VAR_10].type,
       VAR_9);
  }

  VAR_5->mod_private = ((void*)0);
 }
}
