
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct request_context {int dummy; } ;
struct hermes_response {int dummy; } ;
struct hermes {struct ezusb_priv* priv; } ;
struct ezusb_priv {int dev; } ;
typedef int data ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ezusb_priv*,struct request_context*,int,int **,int ,int *,int ,int *) ;
 struct request_context* FUNC_2 (struct ezusb_priv*,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hermes *VAR_4, u16 VAR_5, u16 VAR_6, u16 VAR_7,
        u16 VAR_8, struct hermes_response *VAR_9)
{
 struct ezusb_priv *VAR_10 = VAR_4->priv;
 struct request_context *VAR_11;

 __le16 VAR_12[4] = {
  FUNC_0(VAR_5),
  FUNC_0(VAR_6),
  FUNC_0(VAR_7),
  FUNC_0(VAR_8),
 };
 FUNC_3(VAR_10->dev,
     "0x%04X, parm0 0x%04X, parm1 0x%04X, parm2 0x%04X\n", VAR_5,
     VAR_6, VAR_7, VAR_8);
 VAR_11 = FUNC_2(VAR_10, VAR_3, VAR_2);
 if (!VAR_11)
  return -VAR_0;

 return FUNC_1(VAR_10, VAR_11, sizeof(VAR_12), &VAR_12,
    VAR_1, ((void*)0), 0, ((void*)0));
}
