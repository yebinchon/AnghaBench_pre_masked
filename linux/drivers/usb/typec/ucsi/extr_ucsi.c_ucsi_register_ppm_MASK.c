
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ppm {int dummy; } ;
struct ucsi {int work; struct ucsi_ppm* ppm; struct device* dev; int ppm_lock; int complete; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct ucsi* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct ucsi* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

struct ucsi *FUNC_6(struct device *VAR_4, struct ucsi_ppm *VAR_5)
{
 struct ucsi *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_6->work, VAR_3);
 FUNC_2(&VAR_6->complete);
 FUNC_4(&VAR_6->ppm_lock);

 VAR_6->dev = VAR_4;
 VAR_6->ppm = VAR_5;





 FUNC_5(VAR_2, &VAR_6->work);

 return VAR_6;
}
