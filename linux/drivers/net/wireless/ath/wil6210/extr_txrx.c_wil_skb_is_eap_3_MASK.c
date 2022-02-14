
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_eapol_key {int key_info; } ;
struct wil6210_priv {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 struct wil_eapol_key* FUNC_2 (struct wil6210_priv*,struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct wil6210_priv *VAR_2, struct sk_buff *VAR_3)
{
 struct wil_eapol_key *VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4->key_info);
 if (VAR_5 & (VAR_1 |
   VAR_0)) {

  FUNC_1(VAR_2, "EAPOL key message 3\n");
  return 1;
 }

 FUNC_1(VAR_2, "EAPOL key message 1\n");

 return 0;
}
