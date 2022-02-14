
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned short) ;
 unsigned short FUNC_1 (struct block_device*) ;

__attribute__((used)) static bool FUNC_2(struct block_device *VAR_0,
     unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned short VAR_3 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_1, VAR_3))
  return 0;
 if (!FUNC_0(VAR_2, VAR_3))
  return 0;

 return 1;
}
