
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {size_t* prio_tc; size_t num_tc; } ;
struct hclge_dev {TYPE_1__ tm_info; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hclge_dev *VAR_1, u8 *VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 VAR_4 = VAR_1->tm_info.prio_tc[VAR_3];

 if (VAR_4 >= VAR_1->tm_info.num_tc)
  return -VAR_0;
 VAR_2[VAR_3 >> 1] |= VAR_4 << ((VAR_3 & 1) * 4);

 return 0;
}
