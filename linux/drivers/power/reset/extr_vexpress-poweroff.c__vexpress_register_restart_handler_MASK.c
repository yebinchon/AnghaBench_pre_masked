
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (int *) ;
 struct device* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4)
{
 int VAR_5;

 VAR_1 = VAR_4;
 if (FUNC_1(&VAR_3) == 1) {
  VAR_5 = FUNC_4(&VAR_2);
  if (VAR_5) {
   FUNC_2(VAR_4, "cannot register restart handler (err=%d)\n", VAR_5);
   FUNC_0(&VAR_3);
   return VAR_5;
  }
 }
 FUNC_3(VAR_4, &VAR_0);

 return 0;
}
