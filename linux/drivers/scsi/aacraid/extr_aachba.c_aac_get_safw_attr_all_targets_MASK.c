
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {TYPE_1__** hba_map; } ;
struct aac_ciss_identify_pd {int dummy; } ;
struct TYPE_2__ {struct aac_ciss_identify_pd* safw_identify_resp; } ;


 int FUNC_0 (struct aac_dev*,int) ;
 int FUNC_1 (struct aac_dev*,int) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (struct aac_dev*,int) ;
 int FUNC_4 (struct aac_dev*,struct aac_ciss_identify_pd**,int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct aac_dev *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 struct aac_ciss_identify_pd *VAR_6 = ((void*)0);

 VAR_3 = FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_3; ++VAR_1) {

  VAR_4 = FUNC_1(VAR_0, VAR_1);
  VAR_5 = FUNC_3(VAR_0, VAR_1);

  VAR_2 = FUNC_4(VAR_0,
      &VAR_6, VAR_4, VAR_5);

  if (FUNC_5(VAR_2 < 0))
   goto free_identify_resp;

  VAR_0->hba_map[VAR_4][VAR_5].safw_identify_resp = VAR_6;
 }

out:
 return VAR_2;
free_identify_resp:
 FUNC_0(VAR_0, VAR_1);
 goto out;
}
