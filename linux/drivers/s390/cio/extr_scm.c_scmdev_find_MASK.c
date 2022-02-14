
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_device {int dummy; } ;
struct sale {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,struct sale*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct scm_device* FUNC_1 (struct device*) ;

__attribute__((used)) static struct scm_device *FUNC_2(struct sale *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_1, ((void*)0), VAR_2, VAR_0);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
