
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hantro_dev {TYPE_1__* variant; } ;
struct TYPE_2__ {int dec_fmts; } ;


 int VAR_0 ;
 int FUNC_0 (struct hantro_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct hantro_dev *VAR_1)
{
 if (!VAR_1->variant->dec_fmts)
  return 0;

 return FUNC_0(VAR_1, VAR_0);
}
