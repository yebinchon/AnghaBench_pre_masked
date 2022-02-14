
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tcphdr {int doff; scalar_t__ check; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; scalar_t__ data; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct TYPE_2__ {scalar_t__ gso_size; int gso_segs; int gso_type; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_5, u16 VAR_6, int VAR_7)
{
 struct tcphdr *VAR_8;
 int VAR_9 = 0;
 int VAR_10;


 if (VAR_5->protocol == FUNC_1(VAR_0)) {
  struct iphdr *VAR_11 = (struct iphdr *)VAR_5->data;

  if (VAR_11->protocol == VAR_2) {
   VAR_9 = VAR_11->ihl * 4;
   FUNC_3(VAR_5)->gso_type = VAR_3;
  } else {
   return;
  }
 } else if (VAR_5->protocol == FUNC_1(VAR_1)) {
  struct ipv6hdr *VAR_12 = (struct ipv6hdr *)VAR_5->data;

  if (VAR_12->nexthdr == VAR_2) {
   VAR_9 = sizeof(struct ipv6hdr);
   FUNC_3(VAR_5)->gso_type = VAR_4;
  } else {
   return;
  }
 } else {
  return;
 }



 VAR_8 = (struct tcphdr *)(VAR_5->data + VAR_9);
 if (VAR_7) {
  FUNC_3(VAR_5)->gso_size = VAR_6;
 } else if (VAR_9) {
  FUNC_3(VAR_5)->gso_size = FUNC_2(VAR_8->check);
  VAR_8->check = 0;
 }

 if (FUNC_3(VAR_5)->gso_size) {
  VAR_10 = VAR_9 + VAR_8->doff * 4;
  FUNC_3(VAR_5)->gso_segs =
    FUNC_0(VAR_5->len - VAR_10,
          FUNC_3(VAR_5)->gso_size);
 }
}
