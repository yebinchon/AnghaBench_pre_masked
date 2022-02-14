
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy* VAR_1)
{
 u16 VAR_2;


 VAR_2 = FUNC_0(VAR_1, VAR_0) & 0x000f;
 if (VAR_2 == 0) {
  FUNC_1(VAR_1, 0x1d, 0x000a);
  FUNC_1(VAR_1, 0x1e, 0x0821);

  FUNC_1(VAR_1, 0x1d, 0x0006);
  FUNC_1(VAR_1, 0x1e, 0x8600);

  FUNC_1(VAR_1, 0x1d, 0x000b);
  FUNC_1(VAR_1, 0x1e, 0x0100);

  FUNC_1(VAR_1, 0x1d, 0x0004);
  FUNC_1(VAR_1, 0x1e, 0x4850);
 }
 return 0;
}
