
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device_id {scalar_t__ vendor; scalar_t__ coreid; scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct ssb_device_id *VAR_3,
      const struct ssb_device_id *VAR_4)
{
 if ((VAR_3->vendor != VAR_4->vendor) &&
     VAR_3->vendor != VAR_2)
  return 0;
 if ((VAR_3->coreid != VAR_4->coreid) &&
     VAR_3->coreid != VAR_0)
  return 0;
 if ((VAR_3->revision != VAR_4->revision) &&
     VAR_3->revision != VAR_1)
  return 0;
 return 1;
}
