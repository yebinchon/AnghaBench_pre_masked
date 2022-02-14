
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe_ctx {scalar_t__ sequence; scalar_t__ deinterlacing; int dev; } ;
struct vb2_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vpe_ctx*) ;
 int FUNC_1 (struct vpe_ctx*,int) ;
 int FUNC_2 (struct vpe_ctx*) ;
 struct vpe_ctx* FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct vpe_ctx*,struct vb2_queue*,int ) ;

__attribute__((used)) static int FUNC_6(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct vpe_ctx *VAR_4 = FUNC_3(VAR_2);


 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_4->dev,
   "Conversion setup failed, check source and destination parameters\n"
   );
  FUNC_5(VAR_4, VAR_2, VAR_1);
  return -VAR_0;
 }

 if (VAR_4->deinterlacing)
  FUNC_1(VAR_4, 0x0);

 if (VAR_4->sequence != 0)
  FUNC_2(VAR_4);

 return 0;
}
