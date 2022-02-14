
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int h_proto; } ;
struct tx_packet_hdr {TYPE_2__ eth803_hdr; TYPE_2__ rfc1042_hdr; } ;
struct sk_buff {int len; scalar_t__ tail; struct rfc_1042_hdr* data; } ;
struct TYPE_3__ {int member_0; int member_1; int member_2; } ;
struct rfc_1042_hdr {int member_0; int member_1; int member_2; int member_4; int snap_type; TYPE_1__ member_3; } ;
struct ethhdr {int h_proto; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,struct rfc_1042_hdr*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 struct tx_packet_hdr* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,struct rfc_1042_hdr*,int) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_2,
      struct sk_buff *VAR_3, int *VAR_4)

{
 int VAR_5;
 struct rfc_1042_hdr VAR_6 = {
  0xaa,
  0xaa,
  0x03,
  {0x00, 0x00, 0x00},
  0x0000




 };
 struct tx_packet_hdr *VAR_7;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_7));


 VAR_5 = 2 * VAR_0;
 FUNC_1(&VAR_7->eth803_hdr, VAR_3->data, VAR_5);


 VAR_6.snap_type = ((struct ethhdr *)VAR_3->data)->h_proto;

 VAR_5 += sizeof(__be16);

 FUNC_1(&VAR_7->rfc1042_hdr, &VAR_6, sizeof(struct rfc_1042_hdr));

 FUNC_2(VAR_3, VAR_5);


 VAR_7->eth803_hdr.h_proto = FUNC_0(VAR_3->len + VAR_1);


 FUNC_4(VAR_2, VAR_3->data, VAR_3->len);


 *VAR_4 = (4 - ((unsigned long)VAR_2->tail & 0x3)) % 4;

 return VAR_2->len + *VAR_4;
}
