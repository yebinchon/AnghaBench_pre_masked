
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline struct page *FUNC_2(u32 VAR_1, gfp_t VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 > 0)
  VAR_2 |= VAR_0;
 return FUNC_0(VAR_2, VAR_3);
}
