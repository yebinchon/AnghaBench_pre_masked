
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_device {int dev; } ;
struct sale {int dummy; } ;
struct chsc_scm_info {int mbc; int is; struct sale* scmal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct scm_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 struct scm_device* FUNC_3 (struct sale*) ;
 int FUNC_4 (struct scm_device*,struct sale*,int ,int ) ;
 int FUNC_5 (struct scm_device*,struct sale*) ;

__attribute__((used)) static int FUNC_6(struct chsc_scm_info *VAR_2, size_t VAR_3)
{
 struct sale *VAR_4, *VAR_5 = VAR_2->scmal;
 struct scm_device *VAR_6;
 int VAR_7;

 for (VAR_4 = VAR_5; VAR_4 < VAR_5 + VAR_3; VAR_4++) {
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6) {
   FUNC_5(VAR_6, VAR_4);

   FUNC_2(&VAR_6->dev);
   continue;
  }
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  FUNC_4(VAR_6, VAR_4, VAR_2->is, VAR_2->mbc);
  VAR_7 = FUNC_0(&VAR_6->dev);
  if (VAR_7) {

   FUNC_2(&VAR_6->dev);
   return VAR_7;
  }
 }

 return 0;
}
