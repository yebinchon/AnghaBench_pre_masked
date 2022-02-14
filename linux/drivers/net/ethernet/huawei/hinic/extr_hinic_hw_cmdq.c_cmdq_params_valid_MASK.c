
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_cmdq_buf {scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hinic_cmdq_buf *VAR_2)
{
 if (VAR_2->size > VAR_1)
  return -VAR_0;

 return 0;
}
