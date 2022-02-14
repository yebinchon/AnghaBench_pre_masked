
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* rule_num; } ;
struct hclge_dev {TYPE_1__ fd_cfg; } ;


 int FUNC_0 (struct hclge_dev*,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->fd_cfg.rule_num[0]; VAR_1++) {
  FUNC_0(VAR_0, 0, 1, VAR_1);
  FUNC_0(VAR_0, 0, 0, VAR_1);
 }
}
