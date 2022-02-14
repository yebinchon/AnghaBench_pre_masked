
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_mac_repr {unsigned int num_ports; int reserved; } ;
struct nfp_app {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct sk_buff* FUNC_1 (struct nfp_app*,int ,int ,int ) ;
 struct nfp_flower_cmsg_mac_repr* FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_3 (struct nfp_flower_cmsg_mac_repr*,int ,unsigned int) ;

struct sk_buff *
FUNC_4(struct nfp_app *VAR_3, unsigned int VAR_4)
{
 struct nfp_flower_cmsg_mac_repr *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_1(VAR_3, FUNC_3(VAR_5, VAR_2, VAR_4),
        VAR_1, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_6);
 FUNC_0(VAR_5->reserved, 0, sizeof(VAR_5->reserved));
 VAR_5->num_ports = VAR_4;

 return VAR_6;
}
