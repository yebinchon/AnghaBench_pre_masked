
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct qeth_arp_query_data {int reply_bits; } ;
struct qeth_arp_qi_entry7_short_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry7_short {int dummy; } ;
struct qeth_arp_qi_entry7_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry7 {int dummy; } ;
struct qeth_arp_qi_entry5_short_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry5_short {int dummy; } ;
struct qeth_arp_qi_entry5_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry5 {int dummy; } ;
struct qeth_arp_entrytype {scalar_t__ ip; } ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;

__attribute__((used)) static __u32 FUNC_1(struct qeth_card *VAR_2,
   struct qeth_arp_query_data *VAR_3,
   struct qeth_arp_entrytype *VAR_4, __u8 VAR_5)
{
 __u32 VAR_6;
 __u8 VAR_7;

 VAR_7 = VAR_3->reply_bits == 5;
 if (VAR_4->ip == VAR_0) {
  FUNC_0(VAR_2, 4, "arpev4");
  if (VAR_5) {
   VAR_6 = VAR_7 ? sizeof(struct qeth_arp_qi_entry5_short) :
    sizeof(struct qeth_arp_qi_entry7_short);
  } else {
   VAR_6 = VAR_7 ? sizeof(struct qeth_arp_qi_entry5) :
    sizeof(struct qeth_arp_qi_entry7);
  }
 } else if (VAR_4->ip == VAR_1) {
  FUNC_0(VAR_2, 4, "arpev6");
  if (VAR_5) {
   VAR_6 = VAR_7 ?
    sizeof(struct qeth_arp_qi_entry5_short_ipv6) :
    sizeof(struct qeth_arp_qi_entry7_short_ipv6);
  } else {
   VAR_6 = VAR_7 ?
    sizeof(struct qeth_arp_qi_entry5_ipv6) :
    sizeof(struct qeth_arp_qi_entry7_ipv6);
  }
 } else {
  FUNC_0(VAR_2, 4, "arpinv");
  VAR_6 = 0;
 }

 return VAR_6;
}
