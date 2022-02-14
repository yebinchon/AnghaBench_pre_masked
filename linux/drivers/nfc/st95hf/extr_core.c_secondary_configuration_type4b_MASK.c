
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st95hf_context {TYPE_1__* nfcdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct st95hf_context*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct st95hf_context *VAR_1)
{
 int VAR_2 = 0;
 struct device *VAR_3 = &VAR_1->nfcdev->dev;

 VAR_2 = FUNC_1(VAR_1,
          VAR_0,
          0,
          ((void*)0),
          1);
 if (VAR_2)
  FUNC_0(VAR_3, "type b demogain cmd, err = 0x%x\n", VAR_2);

 return VAR_2;
}
