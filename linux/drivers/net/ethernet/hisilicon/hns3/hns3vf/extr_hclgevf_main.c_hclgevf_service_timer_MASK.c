
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hclgevf_dev {int stats_timer; int service_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hclgevf_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct hclgevf_dev*) ;
 struct hclgevf_dev* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_5)
{
 struct hclgevf_dev *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);

 FUNC_2(&VAR_6->service_timer, VAR_3 +
    VAR_0 * VAR_1);

 VAR_6->stats_timer++;
 FUNC_1(VAR_6);
}
