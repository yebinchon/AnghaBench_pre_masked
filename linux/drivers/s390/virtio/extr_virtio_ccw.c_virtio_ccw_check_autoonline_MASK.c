
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dummy; } ;
struct ccw_dev_id {size_t ssid; int devno; } ;


 int FUNC_0 (struct ccw_device*,struct ccw_dev_id*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_1)
{
 struct ccw_dev_id VAR_2;

 FUNC_0(VAR_1, &VAR_2);
 if (FUNC_1(VAR_2.devno, VAR_0[VAR_2.ssid]))
  return 0;
 return 1;
}
