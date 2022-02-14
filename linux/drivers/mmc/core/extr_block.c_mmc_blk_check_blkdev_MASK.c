
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {struct block_device* bd_contains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_2)
{





 if ((!FUNC_0(VAR_0)) || (VAR_2 != VAR_2->bd_contains))
  return -VAR_1;
 return 0;
}
