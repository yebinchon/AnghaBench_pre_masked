
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_device {scalar_t__ chip; } ;
struct octeon_cn6xxx {int conf; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct octeon_device *VAR_1)
{
 u64 VAR_2;

 struct octeon_cn6xxx *VAR_3 = (struct octeon_cn6xxx *)VAR_1->chip;

 VAR_2 = FUNC_2(VAR_1, VAR_0);


 if (FUNC_1(VAR_3->conf) <= 4)

  VAR_2 &= ~(1 << 4);
 else
  VAR_2 |= (1 << 4);

 if (FUNC_0(VAR_3->conf))
  VAR_2 |= 0xF;
 else

  VAR_2 &= ~0xF;
 FUNC_3(VAR_1, VAR_0, VAR_2);
}
