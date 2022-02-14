
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_context {int dummy; } ;
struct hermes {struct ezusb_priv* priv; } ;
struct ezusb_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ezusb_priv*,struct request_context*,int ,int *,int ,int *,int ,int *) ;
 struct request_context* FUNC_1 (struct ezusb_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hermes *VAR_4)
{
 struct ezusb_priv *VAR_5 = VAR_4->priv;
 struct request_context *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_6, 0, ((void*)0),
    VAR_1, ((void*)0), 0, ((void*)0));
}
