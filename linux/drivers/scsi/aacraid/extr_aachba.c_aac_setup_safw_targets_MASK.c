
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {int dummy; } ;


 int FUNC_0 (struct aac_dev*,int) ;
 int FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (struct aac_dev*) ;
 int FUNC_4 (struct aac_dev*) ;
 int FUNC_5 (struct aac_dev*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct aac_dev *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_6(VAR_1 < 0))
  goto out;

 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_6(VAR_1 < 0))
  goto out;

 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_6(VAR_1 < 0))
  goto free_ciss_luns;

 FUNC_5(VAR_0);

 FUNC_0(VAR_0, -1);
free_ciss_luns:
 FUNC_1(VAR_0);
out:
 return VAR_1;
}
