
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct buffer_head *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_0(((__be32 *)VAR_0->b_data)[5]);
 ((__be32 *)VAR_0->b_data)[5] = FUNC_1(VAR_2 - VAR_1);
}
