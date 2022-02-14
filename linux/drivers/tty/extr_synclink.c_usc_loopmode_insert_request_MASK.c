
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int loopmode_insert_requested; int cmr_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mgsl_struct*,int ) ;
 int FUNC_1 (struct mgsl_struct*,int ,int) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct * VAR_4 )
{
  VAR_4->loopmode_insert_requested = 1;




  FUNC_1( VAR_4, VAR_2,
  (FUNC_0( VAR_4, VAR_2 ) | VAR_3 ) );


 VAR_4->cmr_value |= VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_4->cmr_value);
}
