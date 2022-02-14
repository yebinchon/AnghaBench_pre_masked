
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct fdp1_field_buffer {int last_field; } ;
struct fdp1_dev {int m2m_dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct fdp1_ctx {scalar_t__ translen; TYPE_1__ fh; struct fdp1_dev* fdp1; } ;
struct fdp1_buffer {unsigned int num_fields; struct fdp1_field_buffer* fields; } ;


 int FUNC_0 (struct fdp1_dev*,char*,...) ;
 int FUNC_1 (struct fdp1_ctx*) ;
 scalar_t__ FUNC_2 (struct fdp1_ctx*) ;
 int FUNC_3 (struct fdp1_ctx*,struct fdp1_field_buffer*) ;
 struct fdp1_buffer* FUNC_4 (struct vb2_v4l2_buffer*) ;
 int FUNC_5 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
 struct fdp1_ctx *VAR_1 = VAR_0;
 struct fdp1_dev *VAR_2 = VAR_1->fdp1;
 struct vb2_v4l2_buffer *VAR_3;
 struct fdp1_buffer *VAR_4;
 unsigned int VAR_5;

 FUNC_0(VAR_2, "+\n");

 VAR_1->translen = 0;


 VAR_3 = FUNC_6(VAR_1->fh.m2m_ctx);
 VAR_4 = FUNC_4(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_fields; VAR_5++) {
  struct fdp1_field_buffer *VAR_6 = &VAR_4->fields[VAR_5];

  FUNC_3(VAR_1, VAR_6);
  FUNC_0(VAR_2, "Queued Buffer [%d] last_field:%d\n",
   VAR_5, VAR_6->last_field);
 }


 while (FUNC_2(VAR_1))
  ;

 if (VAR_1->translen == 0) {
  FUNC_0(VAR_2, "No jobs were processed. M2M action complete\n");
  FUNC_5(VAR_2->m2m_dev, VAR_1->fh.m2m_ctx);
  return;
 }


 FUNC_1(VAR_1);
}
