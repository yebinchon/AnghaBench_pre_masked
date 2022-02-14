
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct eth_classify_header {scalar_t__ rule_cnt; int echo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_2, int VAR_3,
    struct eth_classify_header *VAR_4, int VAR_5)
{
 VAR_4->echo = FUNC_0((VAR_2 & VAR_0) |
    (VAR_3 << VAR_1));
 VAR_4->rule_cnt = (u8)VAR_5;
}
