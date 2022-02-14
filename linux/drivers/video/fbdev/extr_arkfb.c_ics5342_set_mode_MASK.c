
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dac_info {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct dac_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct dac_info*,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dac_info *VAR_3, int VAR_4)
{
 u8 VAR_5;

 if (VAR_4 >= VAR_0)
  return -VAR_1;

 VAR_5 = VAR_2[VAR_4];

 if (! VAR_5)
  return -VAR_1;

 FUNC_1(VAR_3, 6, VAR_5 & 0xF0);
 FUNC_0(VAR_3)->mode = VAR_4;

 return 0;
}
