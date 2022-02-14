
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tun_flags; } ;
struct ip_tunnel_info {int options_len; TYPE_1__ key; } ;
struct genevehdr {int dummy; } ;
struct dst_entry {int header_len; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct genevehdr* FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct genevehdr*,struct ip_tunnel_info const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct dst_entry *VAR_3, struct sk_buff *VAR_4,
       const struct ip_tunnel_info *VAR_5,
       bool VAR_6, int VAR_7)
{
 bool VAR_8 = !!(VAR_5->key.tun_flags & VAR_2);
 struct genevehdr *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_6);

 VAR_10 = FUNC_0(VAR_3->dev) + VAR_3->header_len +
         VAR_1 + VAR_5->options_len + VAR_7;
 VAR_11 = FUNC_5(VAR_4, VAR_10);
 if (FUNC_10(VAR_11))
  goto free_dst;

 VAR_11 = FUNC_9(VAR_4, VAR_8);
 if (VAR_11)
  goto free_dst;

 VAR_9 = FUNC_1(VAR_4, sizeof(*VAR_9) + VAR_5->options_len);
 FUNC_3(VAR_9, VAR_5);
 FUNC_8(VAR_4, FUNC_4(VAR_0));
 return 0;

free_dst:
 FUNC_2(VAR_3);
 return VAR_11;
}
