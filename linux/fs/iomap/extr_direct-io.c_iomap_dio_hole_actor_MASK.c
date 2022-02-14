
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iter; } ;
struct iomap_dio {int size; TYPE_1__ submit; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static loff_t
FUNC_1(loff_t VAR_0, struct iomap_dio *VAR_1)
{
 VAR_0 = FUNC_0(VAR_0, VAR_1->submit.iter);
 VAR_1->size += VAR_0;
 return VAR_0;
}
