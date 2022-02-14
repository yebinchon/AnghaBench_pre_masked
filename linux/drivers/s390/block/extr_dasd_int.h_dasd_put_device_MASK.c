
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int ref_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dasd_device*) ;

__attribute__((used)) static inline void
FUNC_2(struct dasd_device *VAR_0)
{
 if (FUNC_0(&VAR_0->ref_count) == 0)
  FUNC_1(VAR_0);
}
