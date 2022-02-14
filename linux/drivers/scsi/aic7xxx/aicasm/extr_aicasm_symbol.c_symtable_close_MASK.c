
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int symbol_t ;
typedef int stored_ptr ;
struct TYPE_8__ {scalar_t__ (* seq ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;int (* close ) (TYPE_2__*) ;} ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int FUNC_0 (int **,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_1 ;

void
FUNC_4()
{
 if (VAR_1 != ((void*)0)) {
  DBT VAR_2;
  DBT VAR_3;

  while (VAR_1->seq(VAR_1, &VAR_2, &VAR_3, VAR_0) == 0) {
   symbol_t *VAR_4;

   FUNC_0(&VAR_4, VAR_3.data, sizeof(VAR_4));
   FUNC_3(VAR_4);
  }
  VAR_1->close(VAR_1);
 }
}
