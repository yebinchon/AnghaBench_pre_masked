
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int * health_thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct genwqe_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct genwqe_dev *VAR_1)
{
 int VAR_2;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1->health_thread);
 VAR_1->health_thread = ((void*)0);
 return 0;
}
