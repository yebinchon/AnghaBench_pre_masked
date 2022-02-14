
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int streamon_out; int streamon_cap; int lock; int num_output_bufs; int num_input_bufs; scalar_t__ sequence_out; scalar_t__ sequence_cap; } ;
struct vb2_queue {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct venus_inst* FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (struct venus_inst*) ;
 int FUNC_7 (struct venus_inst*,int ) ;
 int FUNC_8 (struct venus_inst*) ;
 int FUNC_9 (struct venus_inst*,int ,int ,int ) ;
 int FUNC_10 (struct venus_inst*) ;

__attribute__((used)) static int FUNC_11(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct venus_inst *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 FUNC_1(&VAR_4->lock);

 if (VAR_2->type == VAR_0)
  VAR_4->streamon_out = 1;
 else
  VAR_4->streamon_cap = 1;

 if (!(VAR_4->streamon_out & VAR_4->streamon_cap)) {
  FUNC_2(&VAR_4->lock);
  return 0;
 }

 FUNC_8(VAR_4);

 VAR_4->sequence_cap = 0;
 VAR_4->sequence_out = 0;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto bufs_done;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto deinit_sess;

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  goto deinit_sess;

 VAR_5 = FUNC_9(VAR_4, VAR_4->num_input_bufs,
     VAR_4->num_output_bufs, 0);
 if (VAR_5)
  goto deinit_sess;

 VAR_5 = FUNC_10(VAR_4);
 if (VAR_5)
  goto deinit_sess;

 FUNC_2(&VAR_4->lock);

 return 0;

deinit_sess:
 FUNC_0(VAR_4);
bufs_done:
 FUNC_7(VAR_4, VAR_1);
 if (VAR_2->type == VAR_0)
  VAR_4->streamon_out = 0;
 else
  VAR_4->streamon_cap = 0;
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
