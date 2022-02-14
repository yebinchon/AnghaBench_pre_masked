
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_range_info {unsigned int queue_base; } ;
struct knav_queue_inst {unsigned int id; } ;


 int FUNC_0 (struct knav_range_info*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct knav_range_info *VAR_0,
     struct knav_queue_inst *VAR_1)
{
 unsigned VAR_2 = VAR_1->id - VAR_0->queue_base;

 return FUNC_0(VAR_0, VAR_2, 0);
}
