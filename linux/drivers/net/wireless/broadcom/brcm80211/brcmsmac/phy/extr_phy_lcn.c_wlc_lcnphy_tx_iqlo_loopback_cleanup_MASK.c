
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int) ;
 int * VAR_0 ;
 int FUNC_1 (struct brcms_phy*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_1, u16 *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, 0x44c, 0x0 >> 11);

 FUNC_0(VAR_1, 0x43b, 0xC);

 for (VAR_3 = 0; VAR_3 < 20; VAR_3++)
  FUNC_1(VAR_1, VAR_0[VAR_3],
    VAR_2[VAR_3]);
}
