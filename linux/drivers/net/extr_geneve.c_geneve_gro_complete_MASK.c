
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int (* gro_complete ) (struct sk_buff*,int) ;} ;
struct packet_offload {TYPE_1__ callbacks; } ;
struct genevehdr {int proto_type; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct genevehdr*) ;
 struct packet_offload* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2,
          int VAR_3)
{
 struct genevehdr *VAR_4;
 struct packet_offload *VAR_5;
 __be16 VAR_6;
 int VAR_7;
 int VAR_8 = -VAR_0;

 VAR_4 = (struct genevehdr *)(VAR_2->data + VAR_3);
 VAR_7 = FUNC_0(VAR_4);
 VAR_6 = VAR_4->proto_type;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5)
  VAR_8 = VAR_5->callbacks.gro_complete(VAR_2, VAR_3 + VAR_7);

 FUNC_3();

 FUNC_4(VAR_2, VAR_3 + VAR_7);

 return VAR_8;
}
