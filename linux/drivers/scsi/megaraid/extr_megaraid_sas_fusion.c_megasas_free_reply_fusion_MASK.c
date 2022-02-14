
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct fusion_context {int reply_frames_desc_pool; int * reply_frames_desc_phys; scalar_t__* reply_frames_desc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct megasas_instance *VAR_0) {

 struct fusion_context *VAR_1;

 VAR_1 = VAR_0->ctrl_context;

 if (VAR_1->reply_frames_desc[0])
  FUNC_1(VAR_1->reply_frames_desc_pool,
   VAR_1->reply_frames_desc[0],
   VAR_1->reply_frames_desc_phys[0]);

 FUNC_0(VAR_1->reply_frames_desc_pool);

}
