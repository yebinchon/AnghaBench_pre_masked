
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct tegra_fuse {unsigned int (* read ) (struct tegra_fuse*,int ) ;} ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (struct tegra_fuse*,int ) ;

__attribute__((used)) static u8 FUNC_2(struct tegra_fuse *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_0->read(VAR_0, FUNC_0(VAR_1, 4));
 VAR_2 >>= (VAR_1 % 4) * 8;
 VAR_2 &= 0xff;

 return VAR_2;
}
