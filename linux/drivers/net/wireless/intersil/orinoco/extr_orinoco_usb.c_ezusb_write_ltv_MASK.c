
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct request_context {int dummy; } ;
struct hermes {struct ezusb_priv* priv; } ;
struct ezusb_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ezusb_priv*,struct request_context*,int ,void const*,int ,int *,int ,int *) ;
 struct request_context* FUNC_2 (struct ezusb_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hermes *VAR_6, int VAR_7, u16 VAR_8,
      u16 VAR_9, const void *VAR_10)
{
 struct ezusb_priv *VAR_11 = VAR_6->priv;
 u16 VAR_12;
 struct request_context *VAR_13;

 if (VAR_9 == 0)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_9);



 if (VAR_9 == 0)
  return 0;

 VAR_13 = FUNC_2(VAR_11, VAR_8, VAR_4);
 if (!VAR_13)
  return -VAR_1;

 if (VAR_8 == VAR_5)
  VAR_12 = VAR_3;
 else
  VAR_12 = VAR_2;

 return FUNC_1(VAR_11, VAR_13, VAR_9, VAR_10, VAR_12,
    ((void*)0), 0, ((void*)0));
}
