
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil_eapol_key {scalar_t__ key_nonce; } ;
struct wil6210_priv {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wil6210_priv*,char*) ;
 struct wil_eapol_key* FUNC_1 (struct wil6210_priv*,struct sk_buff*) ;

__attribute__((used)) static bool FUNC_2(struct wil6210_priv *VAR_1, struct sk_buff *VAR_2)
{
 struct wil_eapol_key *VAR_3;
 u32 *VAR_4, VAR_5;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4 = (u32 *)VAR_3->key_nonce;
 for (VAR_5 = 0; VAR_5 < VAR_0 / sizeof(u32); VAR_5++, VAR_4++) {
  if (*VAR_4 != 0) {

   FUNC_0(VAR_1, "EAPOL key message 2\n");
   return 0;
  }
 }
 FUNC_0(VAR_1, "EAPOL key message 4\n");

 return 1;
}
