
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,char const*) ;
 int FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(int VAR_6, const char *VAR_7,
      struct genl_info *VAR_8)
{
 struct sk_buff *VAR_9;
 void *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_9)
  return;

 VAR_10 = FUNC_2(VAR_9, 0, 0, &VAR_5, 0,
      VAR_4);
 if (!VAR_10)
  goto error;

 VAR_11 = FUNC_5(VAR_9, VAR_2, VAR_6);
 if (VAR_11 < 0)
  goto error;

 VAR_11 = FUNC_4(VAR_9, VAR_3, FUNC_7(VAR_7),
        VAR_7);
 if (VAR_11 < 0)
  goto error;

 FUNC_0(VAR_9, VAR_10);

 FUNC_3(VAR_9, VAR_8);

 return;

error:
 FUNC_6(VAR_9);
}
