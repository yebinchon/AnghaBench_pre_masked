
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int idx; TYPE_1__* tst; } ;
struct TYPE_3__ {int get; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(char *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2, ((void*)0), 10);

 VAR_0--;
 if (VAR_0 <= 0) {
  VAR_1.idx++;
 } else {
  if (VAR_0 % 100 == 0)
   FUNC_2("kgdbts:RUN ... %d remaining\n", VAR_0);

  VAR_1.idx -= VAR_3;
 }
 FUNC_0(VAR_1.tst[VAR_1.idx].get);
}
