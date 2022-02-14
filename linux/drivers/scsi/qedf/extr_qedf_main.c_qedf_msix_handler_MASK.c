
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_fastpath {int sb_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct qedf_fastpath*) ;
 int FUNC_4 (struct qedf_fastpath*) ;
 int FUNC_5 () ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct qedf_fastpath *VAR_5 = VAR_4;

 if (!VAR_5) {
  FUNC_0(((void*)0), "fp is null.\n");
  return VAR_2;
 }
 if (!VAR_5->sb_info) {
  FUNC_0(((void*)0), "fp->sb_info in null.");
  return VAR_2;
 }





 FUNC_1(VAR_5->sb_info, VAR_0, 0 );

 while (1) {
  FUNC_4(VAR_5);

  if (FUNC_3(VAR_5) == 0) {

   FUNC_2(VAR_5->sb_info);


   FUNC_5();

   if (FUNC_3(VAR_5) == 0) {

    FUNC_1(VAR_5->sb_info, VAR_1, 1);
    return VAR_2;
   }
  }
 }


 return VAR_2;
}
