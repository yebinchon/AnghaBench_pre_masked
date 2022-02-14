
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_3 ;
 int FUNC_2 (struct ath10k*,int ,char*,int) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (void const*) ;
 void** FUNC_5 (struct ath10k*,int ,int ,int ) ;
 int FUNC_6 (void const**) ;
 int FUNC_7 (struct ath10k*,void const*,int) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_4,
         struct sk_buff *VAR_5)
{
 const void **VAR_6;
 const void *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_5(VAR_4, VAR_5->data, VAR_5->len, VAR_2);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  FUNC_3(VAR_4, "failed to parse tlv: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6[VAR_3];
 if (!VAR_7) {
  FUNC_6(VAR_6);
  return -VAR_1;
 }
 VAR_9 = FUNC_4(VAR_7);

 FUNC_2(VAR_4, VAR_0, "wmi tlv diag event len %d\n", VAR_9);
 FUNC_7(VAR_4, VAR_7, VAR_9);

 FUNC_6(VAR_6);
 return 0;
}
