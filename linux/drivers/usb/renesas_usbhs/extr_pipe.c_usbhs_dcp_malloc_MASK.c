
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct usbhs_pipe* FUNC_1 (struct usbhs_priv*,int ) ;

struct usbhs_pipe *FUNC_2(struct usbhs_priv *VAR_1)
{
 struct usbhs_pipe *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->list);





 return VAR_2;
}
