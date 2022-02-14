
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct us_data*,int ,int *,int ) ;
 int FUNC_1 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_2( struct us_data *VAR_4 )
{
 int VAR_5 = VAR_2;
 int VAR_6;

 FUNC_1(VAR_4, "Entering isd200_atapi_soft_reset\n");

 VAR_6 = FUNC_0( VAR_4, VAR_0, ((void*)0), 0 );
 if (VAR_6 != VAR_3) {
  FUNC_1(VAR_4, "   Error issuing Atapi Soft Reset\n");
  VAR_5 = VAR_1;
 }

 FUNC_1(VAR_4, "Leaving isd200_atapi_soft_reset %08X\n", VAR_5);
 return VAR_5;
}
