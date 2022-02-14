
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (int *) ;
 struct vc_data* FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2)
{
 struct vc_data *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_1();
 if (FUNC_0(VAR_2))
  VAR_4 = -VAR_0;
 else if (VAR_2)
  VAR_3 = FUNC_5(VAR_2);
 FUNC_2();

 if (VAR_3 && VAR_2 >= VAR_1) {
  FUNC_4(&VAR_3->port);
  FUNC_3(VAR_3);
 }

 return VAR_4;
}
