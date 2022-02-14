
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {scalar_t__ err_code; } ;
struct rtsx_chip {struct sd_info sd_card; } ;



__attribute__((used)) static inline void FUNC_0(struct rtsx_chip *VAR_0)
{
 struct sd_info *VAR_1 = &VAR_0->sd_card;

 VAR_1->err_code = 0;
}
