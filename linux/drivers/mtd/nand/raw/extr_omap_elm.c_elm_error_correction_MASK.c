
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct elm_info {int ecc_steps; } ;
struct elm_errorvec {int error_count; int* error_loc; int error_uncorrectable; scalar_t__ error_reported; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct elm_info*,int,int) ;
 int FUNC_2 (struct elm_info*,int) ;
 int FUNC_3 (struct elm_info*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct elm_info *VAR_7,
  struct elm_errorvec *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;
 u32 VAR_13;

 for (VAR_9 = 0; VAR_9 < VAR_7->ecc_steps; VAR_9++) {


  if (VAR_8[VAR_9].error_reported) {
   VAR_12 = VAR_5 + VAR_6 * VAR_9;
   VAR_13 = FUNC_2(VAR_7, VAR_12);


   if (VAR_13 & VAR_0) {
    VAR_12 = VAR_3 +
     VAR_6 * VAR_9;


    VAR_8[VAR_9].error_count = VAR_13 &
     VAR_2;


    for (VAR_10 = 0; VAR_10 < VAR_8[VAR_9].error_count; VAR_10++) {

     VAR_13 = FUNC_2(VAR_7, VAR_12);
     VAR_8[VAR_9].error_loc[VAR_10] = VAR_13 &
      VAR_1;


     VAR_12 += 4;
    }

    VAR_11 += VAR_8[VAR_9].error_count;
   } else {
    VAR_8[VAR_9].error_uncorrectable = 1;
   }


   FUNC_3(VAR_7, VAR_4, FUNC_0(VAR_9));


   FUNC_1(VAR_7, VAR_9, 0);
  }
 }
}
