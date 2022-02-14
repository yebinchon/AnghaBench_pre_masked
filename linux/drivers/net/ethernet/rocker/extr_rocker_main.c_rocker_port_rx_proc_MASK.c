
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int offload_fwd_mark; scalar_t__ len; int protocol; } ;
struct rocker_tlv {int dummy; } ;
struct rocker_port {TYPE_2__* dev; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct rocker_desc_info*) ;
 int FUNC_3 (struct rocker_port const*,struct rocker_desc_info*) ;
 int FUNC_4 (struct rocker const*,struct rocker_tlv const**) ;
 void* FUNC_5 (struct rocker_tlv const*) ;
 int FUNC_6 (struct rocker_tlv const**,int ,struct rocker_desc_info*) ;
 int FUNC_7 (struct sk_buff*,size_t) ;

__attribute__((used)) static int FUNC_8(const struct rocker *VAR_6,
          const struct rocker_port *VAR_7,
          struct rocker_desc_info *VAR_8)
{
 const struct rocker_tlv *VAR_9[VAR_5 + 1];
 struct sk_buff *VAR_10 = FUNC_2(VAR_8);
 size_t VAR_11;
 u16 VAR_12 = 0;

 if (!VAR_10)
  return -VAR_1;

 FUNC_6(VAR_9, VAR_5, VAR_8);
 if (!VAR_9[VAR_4])
  return -VAR_0;
 if (VAR_9[VAR_3])
  VAR_12 = FUNC_5(VAR_9[VAR_3]);

 FUNC_4(VAR_6, VAR_9);

 VAR_11 = FUNC_5(VAR_9[VAR_4]);
 FUNC_7(VAR_10, VAR_11);
 VAR_10->protocol = FUNC_0(VAR_10, VAR_7->dev);

 if (VAR_12 & VAR_2)
  VAR_10->offload_fwd_mark = 1;

 VAR_7->dev->stats.rx_packets++;
 VAR_7->dev->stats.rx_bytes += VAR_10->len;

 FUNC_1(VAR_10);

 return FUNC_3(VAR_7, VAR_8);
}
