
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int list; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_10, VAR_11;




 if (VAR_5)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
  FUNC_1(&VAR_4[VAR_10].list);
  FUNC_7(&VAR_4[VAR_10].lock);
 }

 FUNC_3();

 VAR_11 = FUNC_0(VAR_7, VAR_0);
 for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
  FUNC_2(VAR_1);
 if (VAR_9 >= VAR_7) {
  FUNC_5("preallocated %d debug entries\n", VAR_8);
 } else if (VAR_9 > 0) {
  FUNC_6("%d debug entries requested but only %d allocated\n",
   VAR_7, VAR_8);
 } else {
  FUNC_4("debugging out of memory error - disabled\n");
  VAR_5 = 1;

  return 0;
 }
 VAR_6 = VAR_9;

 VAR_3 = 1;

 FUNC_5("debugging enabled by kernel config\n");
 return 0;
}
