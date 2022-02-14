
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ms_info {scalar_t__ err_code; } ;
struct rtsx_chip {struct ms_info ms_card; } ;



__attribute__((used)) static inline int FUNC_0(struct rtsx_chip *VAR_0, u8 VAR_1)
{
 struct ms_info *VAR_2 = &VAR_0->ms_card;

 return (VAR_2->err_code == VAR_1);
}
