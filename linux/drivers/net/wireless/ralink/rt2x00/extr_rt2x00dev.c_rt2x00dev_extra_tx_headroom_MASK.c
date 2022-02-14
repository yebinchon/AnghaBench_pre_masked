
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {TYPE_1__* tx; } ;
struct TYPE_2__ {unsigned int winfo_size; unsigned int desc_size; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct rt2x00_dev *VAR_0)
{
 if (FUNC_0(!VAR_0->tx))
  return 0;

 if (FUNC_1(VAR_0))
  return VAR_0->tx[0].winfo_size + VAR_0->tx[0].desc_size;

 return VAR_0->tx[0].winfo_size;
}
