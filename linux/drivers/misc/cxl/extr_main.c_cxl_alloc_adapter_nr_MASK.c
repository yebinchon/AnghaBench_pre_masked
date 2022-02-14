
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl {int adapter_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct cxl*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cxl *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_0);
 FUNC_3(&VAR_2);
 VAR_5 = FUNC_0(&VAR_3, VAR_4, 0, 0, VAR_1);
 FUNC_4(&VAR_2);
 FUNC_2();
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->adapter_num = VAR_5;

 return 0;
}
