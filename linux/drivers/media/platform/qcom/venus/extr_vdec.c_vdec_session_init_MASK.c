
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {TYPE_1__* fmt_out; } ;
struct TYPE_2__ {int pixfmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*,int ) ;
 int FUNC_4 (struct venus_inst*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct venus_inst *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1, VAR_1->fmt_out->pixfmt);
 if (VAR_2 == -VAR_0)
  return 0;
 else if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_1, FUNC_1(VAR_1),
      FUNC_0(VAR_1));
 if (VAR_2)
  goto deinit;

 return 0;
deinit:
 FUNC_2(VAR_1);
 return VAR_2;
}
