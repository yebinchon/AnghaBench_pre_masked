
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct niu {int dummy; } ;


 int FUNC_0 (struct niu*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_0, u32 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);
 u16 VAR_3;

 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = (VAR_2 & 0xff);
 VAR_2 = FUNC_0(VAR_0, VAR_1 + 1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 |= (VAR_2 & 0xff) << 8;

 return VAR_3;
}
