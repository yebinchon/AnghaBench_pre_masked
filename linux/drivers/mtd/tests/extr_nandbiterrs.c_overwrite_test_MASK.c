
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bitstats ;
struct TYPE_2__ {unsigned int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int*,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int * VAR_5 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_6 = 0;
 unsigned VAR_7;
 unsigned VAR_8 = 0;
 unsigned VAR_9 = 0;



 static unsigned VAR_10[512];

 FUNC_1(VAR_10, 0, sizeof(VAR_10));

 FUNC_3("overwrite biterrors test\n");

 for (VAR_7 = 0; VAR_7 < VAR_3->writesize; VAR_7++)
  VAR_5[VAR_7] = FUNC_0(VAR_7+VAR_4);

 VAR_6 = FUNC_6(1);
 if (VAR_6)
  goto exit;

 while (VAR_9 < VAR_2) {

  VAR_6 = FUNC_6(0);
  if (VAR_6)
   break;

  VAR_6 = FUNC_4(0);
  if (VAR_6 >= 0) {
   if (VAR_6 >= 512) {
    FUNC_3("Implausible number of bit errors corrected\n");
    VAR_6 = -VAR_0;
    break;
   }
   VAR_10[VAR_6]++;
   if (VAR_6 > VAR_8) {
    VAR_8 = VAR_6;
    FUNC_3("Read reported %d corrected bit errors\n",
     VAR_6);
   }
  } else {
   FUNC_3("Read reported error %d\n", VAR_6);
   VAR_6 = 0;
   break;
  }

  VAR_6 = FUNC_5(0);
  if (VAR_6) {
   VAR_10[VAR_8] = VAR_9;
   FUNC_3("ECC failure, read data is incorrect despite read success\n");
   break;
  }

  VAR_6 = FUNC_2();
  if (VAR_6)
   break;

  VAR_9++;
 }



 FUNC_3("Bit error histogram (%d operations total):\n", VAR_9);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_3("Page reads with %3d corrected bit errors: %d\n",
   VAR_7, VAR_10[VAR_7]);

exit:
 return VAR_6;
}
