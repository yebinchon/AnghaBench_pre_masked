
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
 int FUNC_0 (struct ezusb_priv*,struct request_context*,int ,int *,int ,void*,unsigned int,int *) ;
 struct request_context* FUNC_1 (struct ezusb_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hermes *VAR_3, int VAR_4, u16 VAR_5,
     unsigned VAR_6, u16 *VAR_7, void *VAR_8)
{
 struct ezusb_priv *VAR_9 = VAR_3->priv;
 struct request_context *VAR_10;

 if (VAR_6 % 2)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_5);
 if (!VAR_10)
  return -VAR_1;

 return FUNC_0(VAR_9, VAR_10, 0, ((void*)0), VAR_2,
    VAR_8, VAR_6, VAR_7);
}
