
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct tape_device*,int*) ;

__attribute__((used)) static int
FUNC_1(struct tape_device *VAR_0, int VAR_1)
{
 __u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;
 return VAR_2 >> 32;
}
