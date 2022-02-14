
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ena_com_io_sq {int dummy; } ;
struct ena_com_io_cq {int dummy; } ;
struct ena_com_dev {struct ena_com_io_cq* io_cq_queues; struct ena_com_io_sq* io_sq_queues; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,size_t) ;

int FUNC_1(struct ena_com_dev *VAR_2, u16 VAR_3,
       struct ena_com_io_sq **VAR_4,
       struct ena_com_io_cq **VAR_5)
{
 if (VAR_3 >= VAR_1) {
  FUNC_0("Invalid queue number %d but the max is %d\n", VAR_3,
         VAR_1);
  return -VAR_0;
 }

 *VAR_4 = &VAR_2->io_sq_queues[VAR_3];
 *VAR_5 = &VAR_2->io_cq_queues[VAR_3];

 return 0;
}
