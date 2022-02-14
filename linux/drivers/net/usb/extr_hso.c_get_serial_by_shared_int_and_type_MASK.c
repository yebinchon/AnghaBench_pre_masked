
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hso_shared_int {int dummy; } ;
struct hso_serial {struct hso_shared_int* shared_int; } ;
struct TYPE_3__ {int port_spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hso_serial* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static struct hso_serial *FUNC_2(
     struct hso_shared_int *VAR_3,
     int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5] &&
      (FUNC_0(VAR_2[VAR_5])->shared_int == VAR_3) &&
      ((VAR_2[VAR_5]->port_spec & VAR_0) == VAR_6)) {
   return FUNC_0(VAR_2[VAR_5]);
  }
 }

 return ((void*)0);
}
