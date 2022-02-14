
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int config; int unlock_code; int chip_id; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int ) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_6 (struct wbsd_host*) ;
 int FUNC_7 (struct wbsd_host*) ;

__attribute__((used)) static int FUNC_8(struct wbsd_host *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;





 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (!FUNC_5(VAR_4[VAR_8], 2, VAR_0))
   continue;

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
   VAR_11 = 0xFFFF;

   VAR_7->config = VAR_4[VAR_8];
   VAR_7->unlock_code = VAR_5[VAR_9];

   FUNC_7(VAR_7);

   FUNC_3(VAR_2, VAR_4[VAR_8]);
   VAR_11 = FUNC_2(VAR_4[VAR_8] + 1) << 8;

   FUNC_3(VAR_3, VAR_4[VAR_8]);
   VAR_11 |= FUNC_2(VAR_4[VAR_8] + 1);

   FUNC_6(VAR_7);

   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++) {
    if (VAR_11 == VAR_6[VAR_10]) {
     VAR_7->chip_id = VAR_11;

     return 0;
    }
   }

   if (VAR_11 != 0xFFFF) {
    FUNC_1("Unknown hardware (id %x) found at %x\n",
     VAR_11, VAR_4[VAR_8]);
   }
  }

  FUNC_4(VAR_4[VAR_8], 2);
 }

 VAR_7->config = 0;
 VAR_7->unlock_code = 0;

 return -VAR_1;
}
