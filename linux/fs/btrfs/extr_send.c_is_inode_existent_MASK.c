
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct send_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct send_ctx*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_4, u64 VAR_5, u64 VAR_6)
{
 int VAR_7;

 if (VAR_5 == VAR_0)
  return 1;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  goto out;

 if (VAR_7 == VAR_2 ||
     VAR_7 == VAR_1 ||
     VAR_7 == VAR_3)
  VAR_7 = 1;
 else
  VAR_7 = 0;

out:
 return VAR_7;
}
