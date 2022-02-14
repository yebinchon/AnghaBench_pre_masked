
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct elm_info {int ecc_steps; } ;
struct elm_errorvec {scalar_t__ error_reported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct elm_info*,int) ;
 int FUNC_1 (struct elm_info*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct elm_info *VAR_3,
  struct elm_errorvec *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;





 for (VAR_5 = 0; VAR_5 < VAR_3->ecc_steps; VAR_5++) {
  if (VAR_4[VAR_5].error_reported) {
   VAR_6 = VAR_0 +
    VAR_2 * VAR_5;
   VAR_7 = FUNC_0(VAR_3, VAR_6);
   VAR_7 |= VAR_1;
   FUNC_1(VAR_3, VAR_6, VAR_7);
  }
 }
}
