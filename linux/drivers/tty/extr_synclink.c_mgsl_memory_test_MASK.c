
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {scalar_t__ bus_type; scalar_t__ memory_base; } ;


 unsigned long FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static bool FUNC_2( struct mgsl_struct *VAR_2 )
{
 static unsigned long VAR_3[] =
  { 0x0, 0x55555555, 0xaaaaaaaa, 0x66666666, 0x99999999, 0xffffffff, 0x12345678 };
 unsigned long VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;
 unsigned long VAR_6 = VAR_1/sizeof(unsigned long);
 unsigned long * VAR_7;

 if ( VAR_2->bus_type != VAR_0 )
  return 1;

 VAR_7 = (unsigned long *)VAR_2->memory_base;



 for ( VAR_5 = 0 ; VAR_5 < VAR_4 ; VAR_5++ ) {
  *VAR_7 = VAR_3[VAR_5];
  if ( *VAR_7 != VAR_3[VAR_5] )
   return 0;
 }




 for ( VAR_5 = 0 ; VAR_5 < VAR_6 ; VAR_5++ ) {
  *VAR_7 = VAR_5 * 4;
  VAR_7++;
 }

 VAR_7 = (unsigned long *)VAR_2->memory_base;

 for ( VAR_5 = 0 ; VAR_5 < VAR_6 ; VAR_5++ ) {
  if ( *VAR_7 != VAR_5 * 4 )
   return 0;
  VAR_7++;
 }

 FUNC_1( VAR_2->memory_base, 0, VAR_1 );

 return 1;

}
