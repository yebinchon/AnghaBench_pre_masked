
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int const vif_num; } ;
struct ar9170 {TYPE_1__ fw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ar9170*,scalar_t__,int const*) ;

int FUNC_2(struct ar9170 *VAR_2, const unsigned int VAR_3,
        const u8 *VAR_4)
{
 if (FUNC_0(VAR_3 >= VAR_2->fw.vif_num))
  return -VAR_1;

 return FUNC_1(VAR_2,
  VAR_0 + (VAR_3 - 1) * 8, VAR_4);
}
