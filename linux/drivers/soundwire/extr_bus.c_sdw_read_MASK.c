
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdw_slave {int dummy; } ;


 int FUNC_0 (struct sdw_slave*,int ,int,int*) ;

int FUNC_1(struct sdw_slave *VAR_0, u32 VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, 1, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 else
  return VAR_2;
}
