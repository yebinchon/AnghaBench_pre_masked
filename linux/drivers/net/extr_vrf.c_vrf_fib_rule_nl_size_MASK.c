
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fib_rule_hdr {int dummy; } ;


 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 size_t VAR_0;

 VAR_0 = FUNC_0(sizeof(struct fib_rule_hdr));
 VAR_0 += FUNC_1(sizeof(u8));
 VAR_0 += FUNC_1(sizeof(u32));
 VAR_0 += FUNC_1(sizeof(u8));

 return VAR_0;
}
