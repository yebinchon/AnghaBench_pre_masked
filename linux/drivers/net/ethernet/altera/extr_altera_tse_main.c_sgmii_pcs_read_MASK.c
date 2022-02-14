
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct altera_tse_private {int mac_dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct altera_tse_private *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1->mac_dev,
         FUNC_1(VAR_0) + VAR_2 * 4) & 0xffff;
}
