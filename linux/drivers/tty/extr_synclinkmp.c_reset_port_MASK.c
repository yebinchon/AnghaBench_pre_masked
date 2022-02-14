
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int serial_signals; scalar_t__ ie2_value; scalar_t__ ie1_value; scalar_t__ ie0_value; scalar_t__ sca_base; } ;
typedef TYPE_1__ SLMP_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(SLMP_INFO *VAR_7)
{
 if (VAR_7->sca_base) {

  FUNC_2(VAR_7);
  FUNC_0(VAR_7);

  VAR_7->serial_signals &= ~(VAR_6 | VAR_5);
  FUNC_1(VAR_7);


  VAR_7->ie0_value = 0;
  VAR_7->ie1_value = 0;
  VAR_7->ie2_value = 0;
  FUNC_3(VAR_7, VAR_2, VAR_7->ie0_value);
  FUNC_3(VAR_7, VAR_3, VAR_7->ie1_value);
  FUNC_3(VAR_7, VAR_4, VAR_7->ie2_value);

  FUNC_3(VAR_7, VAR_1, VAR_0);
 }
}
