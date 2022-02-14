
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct udphdr {int dummy; } ;
struct tcphdr {int doff; } ;
struct sk_buff {scalar_t__ ip_summed; unsigned char* data; scalar_t__ encapsulation; } ;
struct sctphdr {int dummy; } ;
struct ipv6hdr {int nexthdr; int version; } ;
struct iphdr {int protocol; int version; } ;
struct i40e_ring {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int gso_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;






 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct sk_buff*,int,int*,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_24, u32 *VAR_25,
          u32 *VAR_26, u32 *VAR_27,
          struct i40e_ring *VAR_28,
          u32 *VAR_29)
{
 union {
  struct iphdr *v4;
  struct ipv6hdr *v6;
  unsigned char *hdr;
 } VAR_30;
 union {
  struct tcphdr *tcp;
  struct udphdr *udp;
  unsigned char *hdr;
 } VAR_31;
 unsigned char *VAR_32;
 u32 VAR_33, VAR_34 = 0;
 __be16 VAR_35;
 u8 VAR_36 = 0;

 if (VAR_24->ip_summed != VAR_0)
  return 0;

 VAR_30.hdr = FUNC_4(VAR_24);
 VAR_31 = FUNC_6(VAR_24);


 VAR_33 = ((VAR_30.hdr - VAR_24->data) / 2) << VAR_17;

 if (VAR_24->encapsulation) {
  u32 VAR_37 = 0;

  if (*VAR_25 & VAR_18) {
   VAR_37 |= (*VAR_25 & VAR_20) ?
      VAR_6 :
      VAR_7;

   VAR_36 = VAR_30.v4->protocol;
  } else if (*VAR_25 & VAR_19) {
   VAR_37 |= VAR_8;

   VAR_32 = VAR_30.hdr + sizeof(*VAR_30.v6);
   VAR_36 = VAR_30.v6->nexthdr;
   if (VAR_31 != VAR_32)
    FUNC_0(VAR_24, VAR_32 - VAR_24->data,
       &VAR_36, &VAR_35);
  }


  switch (VAR_36) {
  case 128:
   VAR_37 |= VAR_5;
   *VAR_25 |= VAR_21;
   break;
  case 133:
   VAR_37 |= VAR_1;
   *VAR_25 |= VAR_21;
   break;
  case 132:
  case 131:
   *VAR_25 |= VAR_21;
   VAR_31 = FUNC_2(VAR_24);
   break;
  default:
   if (*VAR_25 & VAR_20)
    return -1;

   FUNC_1(VAR_24);
   return 0;
  }


  VAR_37 |= ((VAR_31 - VAR_30.hdr) / 4) <<
     VAR_2;


  VAR_30.hdr = FUNC_2(VAR_24);


  VAR_37 |= ((VAR_30.hdr - VAR_31) / 2) <<
     VAR_4;


  if ((*VAR_25 & VAR_20) &&
      !(FUNC_5(VAR_24)->gso_type & VAR_22) &&
      (FUNC_5(VAR_24)->gso_type & VAR_23))
   VAR_37 |= VAR_3;


  *VAR_29 |= VAR_37;


  VAR_31 = FUNC_3(VAR_24);
  VAR_36 = 0;


  *VAR_25 &= ~(VAR_18 | VAR_19);
  if (VAR_30.v4->version == 4)
   *VAR_25 |= VAR_18;
  if (VAR_30.v6->version == 6)
   *VAR_25 |= VAR_19;
 }


 if (*VAR_25 & VAR_18) {
  VAR_36 = VAR_30.v4->protocol;



  VAR_34 |= (*VAR_25 & VAR_20) ?
         VAR_10 :
         VAR_9;
 } else if (*VAR_25 & VAR_19) {
  VAR_34 |= VAR_11;

  VAR_32 = VAR_30.hdr + sizeof(*VAR_30.v6);
  VAR_36 = VAR_30.v6->nexthdr;
  if (VAR_31 != VAR_32)
   FUNC_0(VAR_24, VAR_32 - VAR_24->data,
      &VAR_36, &VAR_35);
 }


 VAR_33 |= ((VAR_31 - VAR_30.hdr) / 4) << VAR_15;


 switch (VAR_36) {
 case 129:

  VAR_34 |= VAR_13;
  VAR_33 |= VAR_31>doff << VAR_16;
  break;
 case 130:

  VAR_34 |= VAR_12;
  VAR_33 |= (sizeof(struct sctphdr) >> 2) <<
     VAR_16;
  break;
 case 128:

  VAR_34 |= VAR_14;
  VAR_33 |= (sizeof(struct udphdr) >> 2) <<
     VAR_16;
  break;
 default:
  if (*VAR_25 & VAR_20)
   return -1;
  FUNC_1(VAR_24);
  return 0;
 }

 *VAR_26 |= VAR_34;
 *VAR_27 |= VAR_33;

 return 1;
}
