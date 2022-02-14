
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, uint32_t VAR_2,
   uint32_t VAR_3, uint32_t VAR_4, char *VAR_5)
{
 if (VAR_2 >= VAR_3 && VAR_2 <= VAR_4)
  return 0;

 FUNC_0(VAR_1, "%s out of bounds: %d (%d--%d)\n", VAR_5, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
