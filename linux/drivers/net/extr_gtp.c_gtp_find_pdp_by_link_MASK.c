
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pdp_ctx {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct gtp_dev {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct pdp_ctx* FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct pdp_ctx* FUNC_1 (struct gtp_dev*,int ) ;
 struct pdp_ctx* FUNC_2 (struct gtp_dev*,scalar_t__) ;
 struct gtp_dev* FUNC_3 (struct net*,struct nlattr**) ;
 struct pdp_ctx* FUNC_4 (struct gtp_dev*,int ) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;

__attribute__((used)) static struct pdp_ctx *FUNC_8(struct net *VAR_8,
         struct nlattr *VAR_9[])
{
 struct gtp_dev *VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_9);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 if (VAR_9[VAR_3]) {
  __be32 VAR_11 = FUNC_5(VAR_9[VAR_3]);

  return FUNC_4(VAR_10, VAR_11);
 } else if (VAR_9[VAR_5]) {
  u32 VAR_12 = FUNC_6(VAR_9[VAR_5]);

  if (VAR_12 == VAR_6 && VAR_9[VAR_4])
   return FUNC_1(VAR_10, FUNC_7(VAR_9[VAR_4]));
  else if (VAR_12 == VAR_7 && VAR_9[VAR_2])
   return FUNC_2(VAR_10, FUNC_6(VAR_9[VAR_2]));
 }

 return FUNC_0(-VAR_0);
}
