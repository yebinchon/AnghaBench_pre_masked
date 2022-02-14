
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int mfc_ops; int hw_lock; } ;
struct s5p_mfc_ctx {int state; int vq_src; int src_queue; int vq_dst; int dst_queue; } ;


 void* VAR_0 ;






 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct s5p_mfc_ctx*,unsigned int,unsigned int) ;
 int FUNC_8 (struct s5p_mfc_dev*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct s5p_mfc_dev *VAR_2,
  struct s5p_mfc_ctx *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 FUNC_2("Interrupt Error: %08x\n", VAR_5);

 if (VAR_3) {

  switch (VAR_3->state) {
  case 129:
  case 130:
  case 131:
  case 132:
  case 133:
  case 128:


   FUNC_1(VAR_3);
   VAR_3->state = VAR_0;

   FUNC_3(&VAR_3->dst_queue, &VAR_3->vq_dst);

   FUNC_3(&VAR_3->src_queue, &VAR_3->vq_src);
   FUNC_7(VAR_3, VAR_4, VAR_5);
   break;
  default:
   FUNC_1(VAR_3);
   VAR_3->state = VAR_0;
   FUNC_7(VAR_3, VAR_4, VAR_5);
   break;
  }
 }
 FUNC_0(FUNC_6(0, &VAR_2->hw_lock) == 0);
 FUNC_5(VAR_2->mfc_ops, VAR_1, VAR_2);
 FUNC_4();
 FUNC_8(VAR_2, VAR_4, VAR_5);
}
