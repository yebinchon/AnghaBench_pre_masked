
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info const*,void const*,int *) ;
 scalar_t__ FUNC_1 (struct ubifs_info const*,int const*,int *) ;

int FUNC_2(const struct ubifs_info *VAR_2, const void *VAR_3,
       const u8 *VAR_4)
{
 u8 VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (FUNC_1(VAR_2, VAR_4, VAR_5))
  return -VAR_0;

 return 0;
}
