
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_fastpath {int dummy; } ;
struct qede_dev {struct qede_fastpath* fp_array; } ;


 int FUNC_0 (struct qede_dev*,char*,int) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_dev*,struct qede_fastpath*) ;
 int FUNC_3 (struct qede_dev*) ;

__attribute__((used)) static int FUNC_4(struct qede_dev *VAR_0)
{
 int VAR_1 = 0, VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  struct qede_fastpath *VAR_3 = &VAR_0->fp_array[VAR_2];

  VAR_1 = FUNC_2(VAR_0, VAR_3);
  if (VAR_1) {
   FUNC_0(VAR_0,
          "Failed to allocate memory for fastpath - rss id = %d\n",
          VAR_2);
   FUNC_3(VAR_0);
   return VAR_1;
  }
 }

 return 0;
}
