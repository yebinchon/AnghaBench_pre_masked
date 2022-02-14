
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_fq {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct qman_fq*,int *) ;

__attribute__((used)) static int FUNC_3(struct qman_fq *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_2(VAR_3, &VAR_2)) {
   FUNC_1("qman_enqueue() failed\n");
   VAR_5 = -VAR_0;
  }
  FUNC_0(&VAR_2);
 }

 return VAR_5;
}
