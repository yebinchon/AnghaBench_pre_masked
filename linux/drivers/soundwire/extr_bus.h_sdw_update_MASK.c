
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdw_slave {int dummy; } ;


 int FUNC_0 (struct sdw_slave*,int ) ;
 int FUNC_1 (struct sdw_slave*,int ,int) ;

__attribute__((used)) static inline int
FUNC_2(struct sdw_slave *VAR_0, u32 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = (VAR_4 & ~VAR_2) | VAR_3;
 return FUNC_1(VAR_0, VAR_1, VAR_4);
}
