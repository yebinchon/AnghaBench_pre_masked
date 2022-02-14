
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_slave {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,char*,unsigned int,...) ;
 int FUNC_1 (struct sdw_slave*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct sdw_slave *VAR_1,
      char *VAR_2, size_t VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_4);

 if (VAR_5 < 0)
  return FUNC_0(VAR_2 + VAR_3, VAR_0 - VAR_3, "%3x\tXX\n", VAR_4);
 else
  return FUNC_0(VAR_2 + VAR_3, VAR_0 - VAR_3,
    "%3x\t%2x\n", VAR_4, VAR_5);
}
