
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 struct block_device* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*,int,void*) ;
 int FUNC_4 (struct block_device*,int) ;
 struct block_device* FUNC_5 (char const*) ;

struct block_device *FUNC_6(const char *VAR_2, fmode_t VAR_3,
     void *VAR_4)
{
 struct block_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_2);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);
 if (VAR_6)
  return FUNC_0(VAR_6);

 if ((VAR_3 & VAR_1) && FUNC_2(VAR_5)) {
  FUNC_4(VAR_5, VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
