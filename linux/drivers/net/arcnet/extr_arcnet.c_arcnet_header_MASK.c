
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned short uint16_t ;
struct sk_buff {unsigned int len; int network_header; int mac_header; } ;
struct net_device {int dummy; } ;
struct arcnet_local {int* default_proto; } ;
struct ArcProto {int suffix; int (* build_header ) (struct sk_buff*,struct net_device*,unsigned short,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 struct ArcProto* VAR_4 ;
 int FUNC_0 (int ,struct net_device*,char*,int,...) ;
 struct ArcProto** VAR_5 ;
 struct ArcProto VAR_6 ;
 struct ArcProto* VAR_7 ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,unsigned short,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_8, struct net_device *VAR_9,
    unsigned short VAR_10, const void *VAR_11,
    const void *VAR_12, unsigned VAR_13)
{
 const struct arcnet_local *VAR_14 = FUNC_1(VAR_9);
 uint8_t VAR_15, VAR_16;
 struct ArcProto *VAR_17;

 FUNC_0(VAR_1, VAR_9,
     "create header from %d to %d; protocol %d (%Xh); size %u.\n",
     VAR_12 ? *(uint8_t *)VAR_12 : -1,
     VAR_11 ? *(uint8_t *)VAR_11 : -1,
     VAR_10, VAR_10, VAR_13);

 if (VAR_8->len != 0 && VAR_13 != VAR_8->len)
  FUNC_0(VAR_2, VAR_9, "arcnet_header: Yikes!  skb->len(%d) != len(%d)!\n",
      VAR_8->len, VAR_13);


 if (VAR_10 == VAR_3) {
  VAR_17 = VAR_7;
  FUNC_0(VAR_0, VAR_9, "arc_raw_proto used. proto='%c'\n",
      VAR_17->suffix);
  VAR_15 = VAR_11 ? *(uint8_t *)VAR_11 : 0;
 } else if (!VAR_11) {





  *(uint16_t *)FUNC_2(VAR_8, 2) = VAR_10;

  if (VAR_8->network_header - VAR_8->mac_header != 2)
   FUNC_0(VAR_2, VAR_9, "arcnet_header: Yikes!  diff (%u) is not 2!\n",
       VAR_8->network_header - VAR_8->mac_header);
  return -2;
 } else {

  VAR_15 = *(uint8_t *)VAR_11;
  VAR_16 = VAR_14->default_proto[VAR_15];
  VAR_17 = VAR_5[VAR_16];
  FUNC_0(VAR_1, VAR_9, "building header for %02Xh using protocol '%c'\n",
      VAR_16, VAR_17->suffix);
  if (VAR_17 == &VAR_6 && VAR_4 != VAR_17) {
   FUNC_0(VAR_1, VAR_9, "actually, let's use '%c' instead.\n",
       VAR_4->suffix);
   VAR_17 = VAR_4;
  }
 }
 return VAR_17->build_header(VAR_8, VAR_9, VAR_10, VAR_15);
}
