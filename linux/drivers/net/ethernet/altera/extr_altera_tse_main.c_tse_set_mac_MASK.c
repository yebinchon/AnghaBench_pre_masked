
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_tse_private {int mac_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct altera_tse_private *VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3->mac_dev, FUNC_2(VAR_2));

 if (VAR_4)
  VAR_5 |= VAR_1 | VAR_0;
 else
  VAR_5 &= ~(VAR_1 | VAR_0);

 FUNC_1(VAR_5, VAR_3->mac_dev, FUNC_2(VAR_2));
}
