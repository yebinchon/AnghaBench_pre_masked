
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int,size_t) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int,size_t,size_t*,int ) ;
 int FUNC_5 (char*,long long) ;
 int FUNC_6 (char*,long long) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(int VAR_5)
{
 uint32_t VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;
 loff_t VAR_9 = (loff_t)VAR_5 * VAR_1->erasesize;

 FUNC_2(VAR_4, 0xff, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_1->erasesize / VAR_3; ++VAR_6) {
  FUNC_0(VAR_2, VAR_3);
  VAR_8 = FUNC_4(VAR_1, VAR_9, VAR_3, &VAR_7, VAR_2);
  if (FUNC_7(VAR_8 || VAR_7 != VAR_3)) {
   if (FUNC_3(VAR_8) && VAR_7 == VAR_3) {
    FUNC_6("ECC correction at %#llx\n",
           (long long)VAR_9);
    VAR_8 = 0;
   } else {
    FUNC_5("error: read failed at "
           "%#llx\n", (long long)VAR_9);
    return VAR_8 ? VAR_8 : -1;
   }
  }
  if (FUNC_7(FUNC_1(VAR_2, VAR_4, VAR_3))) {
   FUNC_5("error: verify 0xff failed at "
          "%#llx\n", (long long)VAR_9);
   VAR_0 += 1;
  }
  VAR_9 += VAR_3;
 }

 return VAR_8;
}
