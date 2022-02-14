
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdp_ctx {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pdp_ctx* FUNC_0 (int ) ;
 size_t VAR_2 ;
 struct pdp_ctx* FUNC_1 (struct net*,struct nlattr**) ;

__attribute__((used)) static struct pdp_ctx *FUNC_2(struct net *VAR_3, struct nlattr *VAR_4[])
{
 struct pdp_ctx *VAR_5;

 if (VAR_4[VAR_2])
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 else
  VAR_5 = FUNC_0(-VAR_0);

 if (!VAR_5)
  VAR_5 = FUNC_0(-VAR_1);

 return VAR_5;
}
