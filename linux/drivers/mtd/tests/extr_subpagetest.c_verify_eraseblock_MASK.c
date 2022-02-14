
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,size_t) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,size_t,size_t*,int ) ;
 int FUNC_4 (char*,long long) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(int VAR_6)
{
 size_t VAR_7;
 int VAR_8 = 0;
 loff_t VAR_9 = (loff_t)VAR_6 * VAR_1->erasesize;

 FUNC_6(&VAR_3, VAR_5, VAR_4);
 FUNC_0(VAR_2, VAR_4);
 VAR_8 = FUNC_3(VAR_1, VAR_9, VAR_4, &VAR_7, VAR_2);
 if (FUNC_8(VAR_8 || VAR_7 != VAR_4)) {
  if (FUNC_2(VAR_8) && VAR_7 == VAR_4) {
   FUNC_5("ECC correction at %#llx\n",
          (long long)VAR_9);
   VAR_8 = 0;
  } else {
   FUNC_4("error: read failed at %#llx\n",
          (long long)VAR_9);
   return VAR_8 ? VAR_8 : -1;
  }
 }
 if (FUNC_8(FUNC_1(VAR_2, VAR_5, VAR_4))) {
  FUNC_4("error: verify failed at %#llx\n",
         (long long)VAR_9);
  FUNC_5("------------- written----------------\n");
  FUNC_7(VAR_5);
  FUNC_5("------------- read ------------------\n");
  FUNC_7(VAR_2);
  FUNC_5("-------------------------------------\n");
  VAR_0 += 1;
 }

 VAR_9 += VAR_4;

 FUNC_6(&VAR_3, VAR_5, VAR_4);
 FUNC_0(VAR_2, VAR_4);
 VAR_8 = FUNC_3(VAR_1, VAR_9, VAR_4, &VAR_7, VAR_2);
 if (FUNC_8(VAR_8 || VAR_7 != VAR_4)) {
  if (FUNC_2(VAR_8) && VAR_7 == VAR_4) {
   FUNC_5("ECC correction at %#llx\n",
          (long long)VAR_9);
   VAR_8 = 0;
  } else {
   FUNC_4("error: read failed at %#llx\n",
          (long long)VAR_9);
   return VAR_8 ? VAR_8 : -1;
  }
 }
 if (FUNC_8(FUNC_1(VAR_2, VAR_5, VAR_4))) {
  FUNC_5("error: verify failed at %#llx\n",
         (long long)VAR_9);
  FUNC_5("------------- written----------------\n");
  FUNC_7(VAR_5);
  FUNC_5("------------- read ------------------\n");
  FUNC_7(VAR_2);
  FUNC_5("-------------------------------------\n");
  VAR_0 += 1;
 }

 return VAR_8;
}
