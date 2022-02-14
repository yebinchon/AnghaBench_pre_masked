
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;


 int FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct block_device *VAR_0)
{
 return FUNC_2(FUNC_0(VAR_0)) ||
        FUNC_1(VAR_0);
}
