
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct request_context {int dummy; } ;
struct hermes {struct ezusb_priv* priv; } ;
struct ezusb_priv {int dummy; } ;
typedef int data ;
typedef char const __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char FUNC_0 (int) ;
 int FUNC_1 (struct ezusb_priv*,struct request_context*,int,char const*,int ,int *,int ,int *) ;
 struct request_context* FUNC_2 (struct ezusb_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hermes *VAR_5, const char *VAR_6,
          u32 VAR_7, u32 VAR_8)
{
 struct ezusb_priv *VAR_9 = VAR_5->priv;
 struct request_context *VAR_10;
 __le32 VAR_11 = FUNC_0(VAR_7);
 int VAR_12;

 VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_9, VAR_10, sizeof(VAR_11), &VAR_11,
          VAR_1, ((void*)0), 0, ((void*)0));
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_2(VAR_9, VAR_3, VAR_2);
 if (!VAR_10)
  return -VAR_0;

 return FUNC_1(VAR_9, VAR_10, VAR_8, VAR_6,
    VAR_1, ((void*)0), 0, ((void*)0));
}
