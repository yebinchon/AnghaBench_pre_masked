
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbit_wr_wait {int completion; scalar_t__ ret; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cxgbit_wr_wait *VAR_0)
{
 VAR_0->ret = 0;
 FUNC_0(&VAR_0->completion);
}
