
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int *,int,int const*,int,int) ;

int FUNC_1(struct super_block *VAR_2, const uint8_t *VAR_3, int VAR_4,
       uint8_t *VAR_5, int VAR_6)
{
 int VAR_7;

 if (!VAR_4)
  return -VAR_1;

 if (VAR_6 <= 0)
  return 0;

 VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_3, VAR_4, 1);

 if (VAR_7 == 0)
  VAR_7 = -VAR_0;
 return VAR_7;
}
