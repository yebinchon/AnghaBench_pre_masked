
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wil_eapol_key {scalar_t__ type; int key_info; } ;
struct wil_1x_hdr {scalar_t__ type; } ;
struct wil6210_priv {int dummy; } ;
struct sk_buff {int len; } ;
struct ethhdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct wil6210_priv*,char*) ;

__attribute__((used)) static struct wil_eapol_key *FUNC_5(struct wil6210_priv *VAR_4,
        struct sk_buff *VAR_5)
{
 u8 *VAR_6;
 const struct wil_1x_hdr *VAR_7;
 struct wil_eapol_key *VAR_8;
 u16 VAR_9;
 int VAR_10 = VAR_5->len;

 if (!FUNC_2(VAR_5)) {
  FUNC_4(VAR_4, "mac header was not set\n");
  return ((void*)0);
 }

 VAR_10 -= FUNC_3(VAR_5);

 if (VAR_10 < sizeof(struct ethhdr) + sizeof(struct wil_1x_hdr) +
     sizeof(struct wil_eapol_key))
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_5) + sizeof(struct ethhdr);

 VAR_7 = (const struct wil_1x_hdr *)VAR_6;
 if (VAR_7->type != VAR_0)
  return ((void*)0);

 VAR_8 = (struct wil_eapol_key *)(VAR_6 + sizeof(struct wil_1x_hdr));
 if (VAR_8->type != VAR_2 &&
     VAR_8->type != VAR_1)
  return ((void*)0);

 VAR_9 = FUNC_0(VAR_8->key_info);
 if (!(VAR_9 & VAR_3))
  return ((void*)0);

 return VAR_8;
}
