
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_dev {int dummy; } ;
struct v4l2_m2m_ctx {struct v4l2_m2m_dev* m2m_dev; } ;


 int FUNC_0 (struct v4l2_m2m_dev*,struct v4l2_m2m_ctx*) ;
 int FUNC_1 (struct v4l2_m2m_dev*) ;

void FUNC_2(struct v4l2_m2m_ctx *VAR_0)
{
 struct v4l2_m2m_dev *VAR_1 = VAR_0->m2m_dev;

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1);
}
