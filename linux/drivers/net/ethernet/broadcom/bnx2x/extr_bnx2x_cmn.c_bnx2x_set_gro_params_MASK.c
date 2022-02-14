
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int gso_size; int gso_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_7, u16 VAR_8,
     u16 VAR_9, unsigned int VAR_10,
     u16 VAR_11)
{



 u16 VAR_12 = VAR_0 + sizeof(struct tcphdr);

 if (FUNC_0(VAR_8, VAR_1) ==
     VAR_3) {
  VAR_12 += sizeof(struct ipv6hdr);
  FUNC_2(VAR_7)->gso_type = VAR_5;
 } else {
  VAR_12 += sizeof(struct iphdr);
  FUNC_2(VAR_7)->gso_type = VAR_4;
 }






 if (VAR_8 & VAR_2)
  VAR_12 += VAR_6;

 FUNC_2(VAR_7)->gso_size = VAR_9 - VAR_12;




 FUNC_1(VAR_7)->count = VAR_11;
}
