
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tcphdr {int doff; int check; } ;
struct sk_buff {scalar_t__ ip_summed; unsigned char* data; int len; } ;
struct ipv6hdr {scalar_t__ payload_len; } ;
struct iphdr {int version; int ihl; scalar_t__ tot_len; int check; } ;
struct igbvf_ring {int dummy; } ;
struct TYPE_2__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct igbvf_ring*,int,int,int) ;
 void* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct igbvf_ring *VAR_7,
       struct sk_buff *VAR_8, u32 VAR_9, u8 *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 union {
  struct iphdr *v4;
  struct ipv6hdr *v6;
  unsigned char *hdr;
 } VAR_14;
 union {
  struct tcphdr *tcp;
  unsigned char *hdr;
 } VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 if (VAR_8->ip_summed != VAR_0)
  return 0;

 if (!FUNC_7(VAR_8))
  return 0;

 VAR_18 = FUNC_6(VAR_8, 0);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_14.hdr = FUNC_8(VAR_8);
 VAR_15 = FUNC_5(VAR_8);


 VAR_12 = VAR_5;


 if (VAR_14.v4->version == 4) {
  unsigned char *VAR_19 = FUNC_5(VAR_8);
  unsigned char *VAR_20 = VAR_14.hdr + (VAR_14.v4->ihl * 4);




  VAR_14.v4->check = FUNC_0(FUNC_1(VAR_20,
            VAR_19 - VAR_20,
            0));
  VAR_12 |= VAR_4;

  VAR_14.v4->tot_len = 0;
 } else {
  VAR_14.v6->payload_len = 0;
 }


 VAR_17 = VAR_15 - VAR_8->data;


 *VAR_10 = (VAR_15>doff * 4) + VAR_17;


 VAR_16 = VAR_8->len - VAR_17;
 FUNC_2(&VAR_15>check, FUNC_3(VAR_16));


 VAR_13 = (*VAR_10 - VAR_17) << VAR_1;
 VAR_13 |= FUNC_9(VAR_8)->gso_size << VAR_3;


 VAR_11 = VAR_15 - VAR_14.hdr;
 VAR_11 |= (VAR_14.hdr - VAR_8->data) << VAR_2;
 VAR_11 |= VAR_9 & VAR_6;

 FUNC_4(VAR_7, VAR_11, VAR_12, VAR_13);

 return 1;
}
