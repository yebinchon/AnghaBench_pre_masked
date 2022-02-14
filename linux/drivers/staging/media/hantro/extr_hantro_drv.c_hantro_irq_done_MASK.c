
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hantro_dev {int watchdog_work; int m2m_dev; } ;
struct hantro_ctx {int dummy; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct hantro_dev*,struct hantro_ctx*,unsigned int,int) ;
 struct hantro_ctx* FUNC_2 (int ) ;

void FUNC_3(struct hantro_dev *VAR_0, unsigned int VAR_1,
       enum vb2_buffer_state VAR_2)
{
 struct hantro_ctx *VAR_3 =
  FUNC_2(VAR_0->m2m_dev);






 if (FUNC_0(&VAR_0->watchdog_work))
  FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
}
