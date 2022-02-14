
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_config {int nluns; int * luns; } ;
struct fsg_common {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct fsg_common*,int) ;
 int FUNC_1 (struct fsg_common*,int *,int,char*,int *) ;
 int FUNC_2 (struct fsg_common*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,int) ;

int FUNC_5(struct fsg_common *VAR_0, struct fsg_config *VAR_1)
{
 char VAR_2[8];
 int VAR_3, VAR_4;

 FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->nluns; ++VAR_3) {
  FUNC_4(VAR_2, sizeof(VAR_2), "lun%d", VAR_3);
  VAR_4 = FUNC_1(VAR_0, &VAR_1->luns[VAR_3], VAR_3, VAR_2, ((void*)0));
  if (VAR_4)
   goto fail;
 }

 FUNC_3("Number of LUNs=%d\n", VAR_1->nluns);

 return 0;

fail:
 FUNC_0(VAR_0, VAR_3);
 return VAR_4;
}
