
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {TYPE_1__* pg_info; } ;
struct hclge_dev {int hw; TYPE_2__ tm_info; } ;
struct hclge_desc {void** data; } ;
struct TYPE_3__ {scalar_t__ pg_sch_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_3, u8 VAR_4)
{
 struct hclge_desc VAR_5;

 FUNC_2(&VAR_5, VAR_0, 0);

 if (VAR_3->tm_info.pg_info[VAR_4].pg_sch_mode == VAR_1)
  VAR_5.data[1] = FUNC_0(VAR_2);
 else
  VAR_5.data[1] = 0;

 VAR_5.data[0] = FUNC_0(VAR_4);

 return FUNC_1(&VAR_3->hw, &VAR_5, 1);
}
