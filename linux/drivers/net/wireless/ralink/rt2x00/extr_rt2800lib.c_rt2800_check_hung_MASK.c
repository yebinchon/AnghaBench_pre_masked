
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_queue {unsigned int wd_idx; int wd_count; } ;


 unsigned int FUNC_0 (struct data_queue*) ;

__attribute__((used)) static int FUNC_1(struct data_queue *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);

 if (VAR_0->wd_idx != VAR_1)
  VAR_0->wd_count = 0;
 else
  VAR_0->wd_count++;

 return VAR_0->wd_count > 16;
}
