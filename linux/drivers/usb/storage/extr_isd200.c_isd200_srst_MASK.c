
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct us_data*,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_3( struct us_data *VAR_5 )
{
 int VAR_6 = VAR_3;
 int VAR_7;

 FUNC_2(VAR_5, "Entering isd200_SRST\n");

 VAR_7 = FUNC_0( VAR_5, VAR_1, ((void*)0), 0 );


 if (VAR_7 != VAR_4) {
  FUNC_2(VAR_5, "   Error issuing SRST\n");
  VAR_6 = VAR_2;
 } else {

  FUNC_1(10);

  VAR_7 = FUNC_0( VAR_5, VAR_0, ((void*)0), 0 );
  if (VAR_7 != VAR_4) {
   FUNC_2(VAR_5, "   Error taking drive out of reset\n");
   VAR_6 = VAR_2;
  } else {

   FUNC_1(50);
  }
 }

 FUNC_2(VAR_5, "Leaving isd200_srst %08X\n", VAR_6);
 return VAR_6;
}
