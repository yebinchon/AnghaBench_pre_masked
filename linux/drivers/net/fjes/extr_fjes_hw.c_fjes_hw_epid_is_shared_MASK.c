
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fjes_device_shared_info {int epnum; int* ep_status; } ;



int FUNC_0(struct fjes_device_shared_info *VAR_0,
      int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1 < VAR_0->epnum)
  VAR_2 = VAR_0->ep_status[VAR_1];

 return VAR_2;
}
