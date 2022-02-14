
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {scalar_t__ mgmt_queue_head; scalar_t__ mgmt_queue_tail; } ;



__attribute__((used)) static void FUNC_0(struct rtllib_device *VAR_0)
{
 VAR_0->mgmt_queue_tail = VAR_0->mgmt_queue_head = 0;
}
