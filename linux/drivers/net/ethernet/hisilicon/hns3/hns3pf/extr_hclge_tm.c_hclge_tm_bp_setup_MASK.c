
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tc; } ;
struct hclge_dev {TYPE_1__ tm_info; } ;


 int FUNC_0 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->tm_info.num_tc; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_2);
  if (VAR_1)
   return VAR_1;
 }

 return VAR_1;
}
