
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251_acx_arp_filter {int enable; int address; int version; } ;
struct wl1251 {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wl1251_acx_arp_filter*) ;
 struct wl1251_acx_arp_filter* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct wl1251*,int ,struct wl1251_acx_arp_filter*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1251 *VAR_6, bool VAR_7, __be32 VAR_8)
{
 struct wl1251_acx_arp_filter *VAR_9;
 int VAR_10;

 FUNC_4(VAR_3, "acx arp ip filter, enable: %d", VAR_7);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return -VAR_4;

 VAR_9->version = VAR_2;
 VAR_9->enable = VAR_7;

 if (VAR_7)
  FUNC_2(VAR_9->address, &VAR_8, VAR_1);

 VAR_10 = FUNC_3(VAR_6, VAR_0,
       VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0)
  FUNC_5("failed to set arp ip filter: %d", VAR_10);

 FUNC_0(VAR_9);
 return VAR_10;
}
