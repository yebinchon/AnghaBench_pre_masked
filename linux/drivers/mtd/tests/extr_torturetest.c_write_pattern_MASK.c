
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,size_t,size_t*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int,size_t) ;
 int FUNC_2 (char*,size_t,size_t) ;

__attribute__((used)) static inline int FUNC_3(int VAR_4, void *VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 loff_t VAR_8 = (loff_t)VAR_4 * VAR_1->erasesize;
 size_t VAR_9 = VAR_1->erasesize;

 if (VAR_2) {
  VAR_8 = (loff_t)(VAR_4 + 1) * VAR_1->erasesize - VAR_2 * VAR_3;
  VAR_9 = VAR_2 * VAR_3;
 }
 VAR_6 = FUNC_0(VAR_1, VAR_8, VAR_9, &VAR_7, VAR_5);
 if (VAR_6) {
  FUNC_1("error %d while writing EB %d, written %zd"
        " bytes\n", VAR_6, VAR_4, VAR_7);
  return VAR_6;
 }
 if (VAR_7 != VAR_9) {
  FUNC_2("written only %zd bytes of %zd, but no error"
         " reported\n", VAR_7, VAR_9);
  return -VAR_0;
 }

 return 0;
}
