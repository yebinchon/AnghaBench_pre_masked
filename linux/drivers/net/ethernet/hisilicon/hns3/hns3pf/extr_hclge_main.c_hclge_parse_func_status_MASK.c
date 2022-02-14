
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_func_status_cmd {int pf_state; } ;
struct hclge_dev {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct hclge_dev *VAR_4,
       struct hclge_func_status_cmd *VAR_5)
{
 if (!(VAR_5->pf_state & VAR_2))
  return -VAR_0;


 if (VAR_5->pf_state & VAR_3)
  VAR_4->flag |= VAR_1;
 else
  VAR_4->flag &= ~VAR_1;

 return 0;
}
