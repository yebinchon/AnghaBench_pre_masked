
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int fmode_t ;
typedef int dev_t ;


 int VAR_0 ;
 struct block_device* FUNC_0 (int) ;
 struct block_device* FUNC_1 (int ) ;
 int FUNC_2 (struct block_device*,int ,void*) ;

struct block_device *FUNC_3(dev_t VAR_1, fmode_t VAR_2, void *VAR_3)
{
 struct block_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_4;
}
