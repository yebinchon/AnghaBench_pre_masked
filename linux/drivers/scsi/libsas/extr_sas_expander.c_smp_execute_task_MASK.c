
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct domain_device {int dummy; } ;


 int FUNC_0 (struct scatterlist*,void*,int) ;
 int FUNC_1 (struct domain_device*,struct scatterlist*,struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_0, void *VAR_1, int VAR_2,
       void *VAR_3, int VAR_4)
{
 struct scatterlist VAR_5;
 struct scatterlist VAR_6;

 FUNC_0(&VAR_5, VAR_1, VAR_2);
 FUNC_0(&VAR_6, VAR_3, VAR_4);
 return FUNC_1(VAR_0, &VAR_5, &VAR_6);
}
