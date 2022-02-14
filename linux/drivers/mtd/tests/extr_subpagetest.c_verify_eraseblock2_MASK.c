
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int,size_t*,int ) ;
 int FUNC_4 (char*,long long) ;
 int FUNC_5 (char*,long long) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(int VAR_6)
{
 size_t VAR_7;
 int VAR_8 = 0, VAR_9;
 loff_t VAR_10 = (loff_t)VAR_6 * VAR_1->erasesize;

 for (VAR_9 = 1; VAR_9 < 33; ++VAR_9) {
  if (VAR_10 + (VAR_4 * VAR_9) > (loff_t)(VAR_6 + 1) * VAR_1->erasesize)
   break;
  FUNC_6(&VAR_3, VAR_5, VAR_4 * VAR_9);
  FUNC_0(VAR_2, VAR_4 * VAR_9);
  VAR_8 = FUNC_3(VAR_1, VAR_10, VAR_4 * VAR_9, &VAR_7, VAR_2);
  if (FUNC_7(VAR_8 || VAR_7 != VAR_4 * VAR_9)) {
   if (FUNC_2(VAR_8) && VAR_7 == VAR_4 * VAR_9) {
    FUNC_5("ECC correction at %#llx\n",
           (long long)VAR_10);
    VAR_8 = 0;
   } else {
    FUNC_4("error: read failed at "
           "%#llx\n", (long long)VAR_10);
    return VAR_8 ? VAR_8 : -1;
   }
  }
  if (FUNC_7(FUNC_1(VAR_2, VAR_5, VAR_4 * VAR_9))) {
   FUNC_4("error: verify failed at %#llx\n",
          (long long)VAR_10);
   VAR_0 += 1;
  }
  VAR_10 += VAR_4 * VAR_9;
 }

 return VAR_8;
}
