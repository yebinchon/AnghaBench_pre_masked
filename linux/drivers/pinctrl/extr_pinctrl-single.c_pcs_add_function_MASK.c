
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_function {unsigned int nvals; struct pcs_func_vals* vals; } ;
struct pcs_func_vals {int dummy; } ;
struct pcs_device {int dev; int pctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pcs_function*) ;
 struct pcs_function* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,char const*,char const**,unsigned int,struct pcs_function*) ;

__attribute__((used)) static int FUNC_3(struct pcs_device *VAR_2,
       struct pcs_function **VAR_3,
       const char *VAR_4,
       struct pcs_func_vals *VAR_5,
       unsigned int VAR_6,
       const char **VAR_7,
       unsigned int VAR_8)
{
 struct pcs_function *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_2->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->vals = VAR_5;
 VAR_9->nvals = VAR_6;

 VAR_10 = FUNC_2(VAR_2->pctl, VAR_4,
            VAR_7, VAR_8,
            VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_2->dev, VAR_9);
  *VAR_3 = ((void*)0);
 } else {
  *VAR_3 = VAR_9;
 }

 return VAR_10;
}
