
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ocelot_port {int dummy; } ;
struct ocelot_mact_entry {int dummy; } ;
struct ocelot_dump_ctx {int idx; struct netlink_callback* cb; struct sk_buff* skb; struct net_device* dev; } ;
struct netlink_callback {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot_mact_entry*,struct ocelot_dump_ctx*) ;
 int FUNC_2 (struct ocelot_port*,int,int,struct ocelot_mact_entry*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct netlink_callback *VAR_2,
      struct net_device *VAR_3,
      struct net_device *VAR_4, int *VAR_5)
{
 struct ocelot_port *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8, VAR_9 = 0;
 struct ocelot_dump_ctx VAR_10 = {
  .dev = VAR_3,
  .skb = VAR_1,
  .cb = VAR_2,
  .idx = *VAR_5,
 };

 struct ocelot_mact_entry VAR_11;




 for (VAR_7 = 0; VAR_7 < 1024; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_11);



   if (VAR_9 == -VAR_0)
    continue;
   else if (VAR_9)
    goto end;

   VAR_9 = FUNC_1(&VAR_11, &VAR_10);
   if (VAR_9)
    goto end;
  }
 }

end:
 *VAR_5 = VAR_10.idx;
 return VAR_9;
}
