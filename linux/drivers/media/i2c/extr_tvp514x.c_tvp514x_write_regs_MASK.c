
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_reg {scalar_t__ token; scalar_t__ val; int reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
         const struct tvp514x_reg VAR_4[])
{
 int VAR_5;
 const struct tvp514x_reg *VAR_6 = VAR_4;

 for (; VAR_6->token != VAR_2; VAR_6++) {
  if (VAR_6->token == VAR_0) {
   FUNC_0(VAR_6->val);
   continue;
  }

  if (VAR_6->token == VAR_1)
   continue;

  VAR_5 = FUNC_1(VAR_3, VAR_6->reg, (u8) VAR_6->val);
  if (VAR_5) {
   FUNC_2(VAR_3, "Write failed. Err[%d]\n", VAR_5);
   return VAR_5;
  }
 }
 return 0;
}
