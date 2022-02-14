
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_range_info {TYPE_1__* ops; } ;
struct knav_queue_inst {struct knav_range_info* range; } ;
struct TYPE_2__ {int (* set_notify ) (struct knav_range_info*,struct knav_queue_inst*,int) ;} ;


 int FUNC_0 (struct knav_range_info*,struct knav_queue_inst*,int) ;

__attribute__((used)) static void FUNC_1(struct knav_queue_inst *VAR_0, bool VAR_1)
{
 struct knav_range_info *VAR_2 = VAR_0->range;

 if (VAR_2->ops && VAR_2->ops->set_notify)
  VAR_2->ops->set_notify(VAR_2, VAR_0, VAR_1);
}
