
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int timeout; int poll; int st_mutex; int sm_mutex; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sfp* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct sfp* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct sfp *FUNC_4(struct device *VAR_4)
{
 struct sfp *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->dev = VAR_4;

 FUNC_3(&VAR_5->sm_mutex);
 FUNC_3(&VAR_5->st_mutex);
 FUNC_1(&VAR_5->poll, VAR_2);
 FUNC_1(&VAR_5->timeout, VAR_3);

 return VAR_5;
}
