
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_app_bpf {int app; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct nfp_app_bpf *VAR_1, unsigned int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1->app, VAR_2, VAR_0);
 FUNC_1(VAR_3, VAR_2);

 return VAR_3;
}
