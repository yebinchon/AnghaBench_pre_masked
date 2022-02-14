
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct octeon_device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct octeon_device*,int ,int *,int,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct octeon_device *VAR_0, u64 VAR_1,
          u32 VAR_2)
{
 __be32 VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, VAR_1, (u8 *)&VAR_3, 4, 0);
}
