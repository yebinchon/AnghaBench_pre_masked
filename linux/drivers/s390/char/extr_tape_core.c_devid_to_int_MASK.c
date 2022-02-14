
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_dev_id {int devno; int ssid; } ;



__attribute__((used)) static int FUNC_0(struct ccw_dev_id *VAR_0)
{
 return VAR_0->devno + (VAR_0->ssid << 16);
}
