
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_app {int dummy; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct nfp_app*) ;
 int FUNC_2 (struct sk_buff*,int) ;

struct sk_buff *
FUNC_3(struct nfp_app *VAR_0, unsigned int VAR_1, gfp_t VAR_2)
{
 struct sk_buff *VAR_3;

 if (FUNC_1(VAR_0))
  VAR_1 += 8;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_1(VAR_0))
  FUNC_2(VAR_3, 8);

 return VAR_3;
}
