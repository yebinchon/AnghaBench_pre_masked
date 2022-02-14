
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_device {int status_read_clean; } ;


 int FUNC_0 (struct siox_device*) ;
 int FUNC_1 (struct siox_device*,int ) ;

bool FUNC_2(struct siox_device *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return !FUNC_1(VAR_0, VAR_0->status_read_clean);
}
