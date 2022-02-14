
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_0 (int,int,int ) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (TYPE_1__*,int,int,unsigned char*) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_7 = 0, VAR_8;
 loff_t VAR_9, VAR_10, VAR_11;
 unsigned char *VAR_12, *VAR_13, *VAR_14, *VAR_15;

 FUNC_5("crosstest\n");
 VAR_12 = FUNC_0(VAR_6, 4, VAR_1);
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = VAR_12 + VAR_6;
 VAR_14 = VAR_13 + VAR_6;
 VAR_15 = VAR_14 + VAR_6;

 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3 && VAR_2[VAR_8]; ++VAR_8)
  VAR_10 += VAR_5->erasesize;

 VAR_11 = VAR_5->size;
 for (VAR_8 = 0; VAR_8 < VAR_3 && VAR_2[VAR_3 - VAR_8 - 1]; ++VAR_8)
  VAR_11 -= VAR_5->erasesize;


 VAR_9 = VAR_11 - VAR_6 - VAR_6;
 VAR_7 = FUNC_3(VAR_5, VAR_9, VAR_6, VAR_12);
 if (VAR_7) {
  FUNC_1(VAR_12);
  return VAR_7;
 }


 VAR_9 = VAR_11 - VAR_6 - VAR_6 - VAR_6;
 VAR_7 = FUNC_3(VAR_5, VAR_9, VAR_6, VAR_12);
 if (VAR_7) {
  FUNC_1(VAR_12);
  return VAR_7;
 }


 VAR_9 = VAR_10;
 FUNC_5("reading page at %#llx\n", (long long)VAR_9);
 VAR_7 = FUNC_3(VAR_5, VAR_9, VAR_6, VAR_13);
 if (VAR_7) {
  FUNC_1(VAR_12);
  return VAR_7;
 }


 VAR_9 = VAR_11 - VAR_6;
 FUNC_5("reading page at %#llx\n", (long long)VAR_9);
 VAR_7 = FUNC_3(VAR_5, VAR_9, VAR_6, VAR_14);
 if (VAR_7) {
  FUNC_1(VAR_12);
  return VAR_7;
 }


 VAR_9 = VAR_10;
 FUNC_5("reading page at %#llx\n", (long long)VAR_9);
 VAR_7 = FUNC_3(VAR_5, VAR_9, VAR_6, VAR_15);
 if (VAR_7) {
  FUNC_1(VAR_12);
  return VAR_7;
 }


 FUNC_5("verifying pages read at %#llx match\n",
        (long long)VAR_10);
 if (FUNC_2(VAR_13, VAR_15, VAR_6)) {
  FUNC_4("verify failed!\n");
  VAR_4 += 1;
 } else if (!VAR_7)
  FUNC_5("crosstest ok\n");
 FUNC_1(VAR_12);
 return VAR_7;
}
