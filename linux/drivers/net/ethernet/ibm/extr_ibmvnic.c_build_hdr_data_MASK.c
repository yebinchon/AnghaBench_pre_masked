
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vlan_ethhdr {int dummy; } ;
struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int dev; } ;
struct ipv6hdr {int dummy; } ;
struct ethhdr {int dummy; } ;
struct TYPE_4__ {int ihl; scalar_t__ protocol; } ;
struct TYPE_3__ {scalar_t__ nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int* FUNC_6 (struct sk_buff*) ;
 int* FUNC_7 (struct sk_buff*) ;
 int* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(u8 VAR_5, struct sk_buff *VAR_6,
     int *VAR_7, u8 *VAR_8)
{
 int VAR_9 = 0;
 u8 *VAR_10;

 if (FUNC_10(VAR_6) && !FUNC_9(VAR_6))
  VAR_7[0] = sizeof(struct vlan_ethhdr);
 else
  VAR_7[0] = sizeof(struct ethhdr);

 if (VAR_6->protocol == FUNC_1(VAR_1)) {
  VAR_7[1] = FUNC_2(VAR_6)->ihl * 4;
  if (FUNC_2(VAR_6)->protocol == VAR_3)
   VAR_7[2] = FUNC_11(VAR_6);
  else if (FUNC_2(VAR_6)->protocol == VAR_4)
   VAR_7[2] = sizeof(struct udphdr);
 } else if (VAR_6->protocol == FUNC_1(VAR_2)) {
  VAR_7[1] = sizeof(struct ipv6hdr);
  if (FUNC_3(VAR_6)->nexthdr == VAR_3)
   VAR_7[2] = FUNC_11(VAR_6);
  else if (FUNC_3(VAR_6)->nexthdr == VAR_4)
   VAR_7[2] = sizeof(struct udphdr);
 } else if (VAR_6->protocol == FUNC_1(VAR_0)) {
  VAR_7[1] = FUNC_0(VAR_6->dev);
  VAR_7[2] = 0;
 }

 FUNC_5(VAR_8, 0, 120);
 if ((VAR_5 >> 6) & 1) {
  VAR_10 = FUNC_6(VAR_6);
  FUNC_4(VAR_8, VAR_10, VAR_7[0]);
  VAR_9 += VAR_7[0];
 }

 if ((VAR_5 >> 5) & 1) {
  VAR_10 = FUNC_7(VAR_6);
  FUNC_4(VAR_8 + VAR_9, VAR_10, VAR_7[1]);
  VAR_9 += VAR_7[1];
 }

 if ((VAR_5 >> 4) & 1) {
  VAR_10 = FUNC_8(VAR_6);
  FUNC_4(VAR_8 + VAR_9, VAR_10, VAR_7[2]);
  VAR_9 += VAR_7[2];
 }
 return VAR_9;
}
