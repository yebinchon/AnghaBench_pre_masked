
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int writesize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 unsigned VAR_5, VAR_6 = 0;

 if (VAR_4)
  FUNC_2("verify_page\n");

 for (VAR_5 = 0; VAR_5 < VAR_1->writesize; VAR_5++) {
  if (VAR_2[VAR_5] != FUNC_0(VAR_5+VAR_3)) {
   FUNC_1("Error: page offset %u, expected %02x, got %02x\n",
    VAR_5, FUNC_0(VAR_5+VAR_3), VAR_2[VAR_5]);
   VAR_6++;
  }
 }

 if (VAR_6)
  return -VAR_0;
 else
  return 0;
}
