
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rio_dev*) ;
 struct rio_dev* FUNC_1 (int ,int ,struct rio_dev*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct rio_dev *VAR_1 = ((void*)0);

 while ((VAR_1 = FUNC_1(VAR_0, VAR_0, VAR_1)) != ((void*)0)) {
  FUNC_0(VAR_1);
 }
 return 0;
}
