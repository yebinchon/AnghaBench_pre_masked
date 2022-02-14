
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int writesize; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_6 (int) ;
 int * VAR_4 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_5 = 0;
 unsigned VAR_6;
 unsigned VAR_7 = 0;

 FUNC_3("incremental biterrors test\n");

 for (VAR_6 = 0; VAR_6 < VAR_0->writesize; VAR_6++)
  VAR_4[VAR_6] = FUNC_0(VAR_6+VAR_1);

 VAR_5 = FUNC_7(1);
 if (VAR_5)
  goto exit;

 while (1) {

  VAR_5 = FUNC_5(1);
  if (VAR_5)
   goto exit;

  VAR_5 = FUNC_4(1);
  if (VAR_5 > 0)
   FUNC_3("Read reported %d corrected bit errors\n", VAR_5);
  if (VAR_5 < 0) {
   FUNC_2("After %d biterrors per subpage, read reported error %d\n",
    VAR_7, VAR_5);
   VAR_5 = 0;
   goto exit;
  }

  VAR_5 = FUNC_6(1);
  if (VAR_5) {
   FUNC_2("ECC failure, read data is incorrect despite read success\n");
   goto exit;
  }

  FUNC_3("Successfully corrected %d bit errors per subpage\n",
   VAR_7);

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_5 = FUNC_1(VAR_6 * VAR_3);
   if (VAR_5 < 0)
    goto exit;
  }
  VAR_7++;
 }

exit:
 return VAR_5;
}
