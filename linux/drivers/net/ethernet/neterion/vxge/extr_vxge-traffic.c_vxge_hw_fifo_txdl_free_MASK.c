
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {struct __vxge_hw_channel channel; } ;


 int FUNC_0 (struct __vxge_hw_channel*,void*) ;

void FUNC_1(struct __vxge_hw_fifo *VAR_0, void *VAR_1)
{
 struct __vxge_hw_channel *VAR_2;

 VAR_2 = &VAR_0->channel;

 FUNC_0(VAR_2, VAR_1);
}
