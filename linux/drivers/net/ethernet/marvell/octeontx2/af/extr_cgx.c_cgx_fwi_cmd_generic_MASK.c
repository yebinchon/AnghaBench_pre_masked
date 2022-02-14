
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lmac {int dummy; } ;
struct cgx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,struct lmac*) ;
 struct lmac* FUNC_2 (int,struct cgx*) ;

__attribute__((used)) static inline int FUNC_3(u64 VAR_4, u64 *VAR_5,
          struct cgx *VAR_6, int VAR_7)
{
 struct lmac *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7, VAR_6);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_8);


 if (!VAR_9) {
  if (FUNC_0(VAR_3, *VAR_5) == VAR_0)
   return -VAR_1;
  else
   return 0;
 }

 return VAR_9;
}
