
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xd_info {int err_code; } ;
struct rtsx_chip {struct xd_info xd_card; } ;



__attribute__((used)) static inline void FUNC_0(struct rtsx_chip *VAR_0, u8 VAR_1)
{
 struct xd_info *VAR_2 = &VAR_0->xd_card;

 VAR_2->err_code = VAR_1;
}
