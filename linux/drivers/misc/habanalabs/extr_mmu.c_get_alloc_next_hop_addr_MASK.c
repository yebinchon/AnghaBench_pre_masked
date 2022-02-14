
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hl_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hl_ctx*) ;
 scalar_t__ FUNC_1 (struct hl_ctx*,scalar_t__) ;

__attribute__((used)) static inline u64 FUNC_2(struct hl_ctx *VAR_1, u64 VAR_2,
      bool *VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (VAR_4 == VAR_0) {
  VAR_4 = FUNC_0(VAR_1);
  *VAR_3 = (VAR_4 != VAR_0);
 }

 return VAR_4;
}
