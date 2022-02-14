
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_hdr {int type; int version; scalar_t__ pad; } ;
struct nfp_app {int dummy; } ;
typedef int gfp_t ;
typedef enum nfp_flower_cmsg_type_port { ____Placeholder_nfp_flower_cmsg_type_port } nfp_flower_cmsg_type_port ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct nfp_app*,unsigned int,int ) ;
 struct nfp_flower_cmsg_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

struct sk_buff *
FUNC_3(struct nfp_app *VAR_2, unsigned int VAR_3,
        enum nfp_flower_cmsg_type_port VAR_4, gfp_t VAR_5)
{
 struct nfp_flower_cmsg_hdr *VAR_6;
 struct sk_buff *VAR_7;

 VAR_3 += VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_7);
 VAR_6->pad = 0;
 VAR_6->version = VAR_1;
 VAR_6->type = VAR_4;
 FUNC_2(VAR_7, VAR_3);

 return VAR_7;
}
