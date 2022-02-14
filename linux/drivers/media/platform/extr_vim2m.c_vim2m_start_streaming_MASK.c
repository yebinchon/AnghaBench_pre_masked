
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vim2m_q_data {scalar_t__ sequence; } ;
struct vim2m_ctx {int dummy; } ;
struct vb2_queue {int type; } ;


 int VAR_0 ;
 struct vim2m_q_data* FUNC_0 (struct vim2m_ctx*,int ) ;
 struct vim2m_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct vim2m_ctx *VAR_3 = FUNC_1(VAR_1);
 struct vim2m_q_data *VAR_4 = FUNC_0(VAR_3, VAR_1->type);

 if (!VAR_4)
  return -VAR_0;

 VAR_4->sequence = 0;
 return 0;
}
