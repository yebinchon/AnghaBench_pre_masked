
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_cap {int num_qps; int max_qps; } ;
struct hinic_hwdev {int hwif; struct hinic_cap nic_cap; } ;
struct hinic_dev_cap {scalar_t__ intr_type; int max_sqs; int max_rqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_5(struct hinic_hwdev *VAR_4,
     struct hinic_dev_cap *VAR_5)
{
 struct hinic_cap *VAR_6 = &VAR_4->nic_cap;
 int VAR_7, VAR_8, VAR_9;

 if (!FUNC_3(VAR_4->hwif) && !FUNC_4(VAR_4->hwif))
  return -VAR_1;

 if (VAR_5->intr_type != VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4->hwif);
 VAR_8 = FUNC_1(VAR_4->hwif);
 VAR_9 = FUNC_2(VAR_4->hwif);


 VAR_6->num_qps = (VAR_9 - (VAR_7 + VAR_8)) / 2;

 if (VAR_6->num_qps > VAR_2)
  VAR_6->num_qps = VAR_2;

 VAR_6->max_qps = VAR_5->max_sqs + 1;
 if (VAR_6->max_qps != (VAR_5->max_rqs + 1))
  return -VAR_0;

 if (VAR_6->num_qps > VAR_6->max_qps)
  VAR_6->num_qps = VAR_6->max_qps;

 return 0;
}
