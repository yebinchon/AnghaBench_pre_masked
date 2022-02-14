
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct jpu_q_data {scalar_t__ sequence; } ;
struct jpu_ctx {int dummy; } ;


 struct jpu_q_data* FUNC_0 (struct jpu_ctx*,int ) ;
 struct jpu_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_0, unsigned VAR_1)
{
 struct jpu_ctx *VAR_2 = FUNC_1(VAR_0);
 struct jpu_q_data *VAR_3 = FUNC_0(VAR_2, VAR_0->type);

 VAR_3->sequence = 0;
 return 0;
}
