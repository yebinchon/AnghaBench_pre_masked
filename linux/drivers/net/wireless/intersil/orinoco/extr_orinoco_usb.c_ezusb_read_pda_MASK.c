
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct request_context {int dummy; } ;
struct hermes {struct ezusb_priv* priv; } ;
struct ezusb_priv {int dummy; } ;
typedef int data ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ezusb_priv*,struct request_context*,int,int **,int ,int *,int,int *) ;
 struct request_context* FUNC_2 (struct ezusb_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hermes *VAR_3, __le16 *VAR_4,
     u32 VAR_5, u16 VAR_6)
{
 struct ezusb_priv *VAR_7 = VAR_3->priv;
 struct request_context *VAR_8;
 __le16 VAR_9[] = {
  FUNC_0(VAR_5 & 0xffff),
  FUNC_0(VAR_6 - 4)
 };
 VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_2);
 if (!VAR_8)
  return -VAR_0;




 VAR_4[0] = FUNC_0(VAR_6 - 2);

 VAR_4[1] = FUNC_0(0x0800);

 return FUNC_1(VAR_7, VAR_8, sizeof(VAR_9), &VAR_9,
    VAR_1, &VAR_4[2], VAR_6 - 4,
    ((void*)0));
}
