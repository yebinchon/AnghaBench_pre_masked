
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_io_sq {scalar_t__ mem_queue_type; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct ena_com_io_sq*) ;
 void* FUNC_1 (struct ena_com_io_sq*) ;

__attribute__((used)) static void *FUNC_2(struct ena_com_io_sq *VAR_1)
{
 if (VAR_1->mem_queue_type == VAR_0)
  return FUNC_0(VAR_1);

 return FUNC_1(VAR_1);
}
