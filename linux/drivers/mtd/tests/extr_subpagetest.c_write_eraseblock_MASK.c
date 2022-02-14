
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,size_t,size_t*,int ) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(int VAR_4)
{
 size_t VAR_5;
 int VAR_6 = 0;
 loff_t VAR_7 = (loff_t)VAR_4 * VAR_0->erasesize;

 FUNC_2(&VAR_1, VAR_3, VAR_2);
 VAR_6 = FUNC_0(VAR_0, VAR_7, VAR_2, &VAR_5, VAR_3);
 if (FUNC_3(VAR_6 || VAR_5 != VAR_2)) {
  FUNC_1("error: write failed at %#llx\n",
         (long long)VAR_7);
  if (VAR_5 != VAR_2) {
   FUNC_1("  write size: %#x\n", VAR_2);
   FUNC_1("  written: %#zx\n", VAR_5);
  }
  return VAR_6 ? VAR_6 : -1;
 }

 VAR_7 += VAR_2;

 FUNC_2(&VAR_1, VAR_3, VAR_2);
 VAR_6 = FUNC_0(VAR_0, VAR_7, VAR_2, &VAR_5, VAR_3);
 if (FUNC_3(VAR_6 || VAR_5 != VAR_2)) {
  FUNC_1("error: write failed at %#llx\n",
         (long long)VAR_7);
  if (VAR_5 != VAR_2) {
   FUNC_1("  write size: %#x\n", VAR_2);
   FUNC_1("  written: %#zx\n", VAR_5);
  }
  return VAR_6 ? VAR_6 : -1;
 }

 return VAR_6;
}
