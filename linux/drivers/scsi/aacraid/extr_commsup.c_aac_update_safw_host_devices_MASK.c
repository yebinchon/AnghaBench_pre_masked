
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_dev*,int,int) ;
 int FUNC_1 (struct aac_dev*,int,int) ;
 scalar_t__ FUNC_2 (struct aac_dev*,int,int) ;
 int FUNC_3 (struct aac_dev*,int,int) ;
 int FUNC_4 (struct aac_dev*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct aac_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_6 = FUNC_4(VAR_1);
 if (FUNC_7(VAR_6 < 0)) {
  goto out;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

  VAR_3 = FUNC_5(VAR_2);
  VAR_4 = FUNC_6(VAR_2);

  VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);

  if (FUNC_2(VAR_1, VAR_3, VAR_4) && !VAR_5)
   FUNC_0(VAR_1, VAR_3, VAR_4);
  else if (!FUNC_2(VAR_1, VAR_3, VAR_4) &&
        VAR_5)
   FUNC_3(VAR_1, VAR_3, VAR_4);
 }
out:
 return VAR_6;
}
