
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_device {scalar_t__ chip; } ;
struct octeon_cn6xxx {int conf; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct octeon_device *VAR_3)
{
 struct octeon_cn6xxx *VAR_4 = (struct octeon_cn6xxx *)VAR_3->chip;
 u64 VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_3, VAR_1);


 VAR_7 = FUNC_1(FUNC_2(VAR_3, VAR_2));
 VAR_6 = FUNC_3(VAR_3, VAR_0);
 VAR_6 &= 0xffffffffff00ffffULL;
 VAR_6 |= VAR_7 << 16;
 FUNC_4(VAR_3, VAR_0, VAR_6);

 if (FUNC_0(VAR_4->conf))
  VAR_5 |= 0xF;
 else

  VAR_5 &= ~0xF;
 FUNC_4(VAR_3, VAR_1, VAR_5);
}
