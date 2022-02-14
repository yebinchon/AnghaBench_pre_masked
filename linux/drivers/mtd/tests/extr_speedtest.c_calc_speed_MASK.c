
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int erasesize; } ;


 int FUNC_0 (int,long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static long FUNC_2(void)
{
 uint64_t VAR_4;
 long VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3);
 if (VAR_5 == 0)
  return 0;
 VAR_4 = (uint64_t)VAR_1 * (VAR_2->erasesize / 1024) * 1000;
 FUNC_0(VAR_4, VAR_5);
 return VAR_4;
}
