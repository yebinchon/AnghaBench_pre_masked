
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ codec_state; int reconfig; int streamon_cap; scalar_t__ sequence_cap; int core; int num_input_bufs; int streamon_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (struct venus_inst*,int ) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct venus_inst*) ;
 int FUNC_8 (struct venus_inst*) ;
 int FUNC_9 (struct venus_inst*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct venus_inst *VAR_4)
{
 int VAR_5;

 if (!VAR_4->streamon_out)
  return 0;

 if (VAR_4->codec_state == VAR_2) {
  if (VAR_4->reconfig)
   goto reconfigure;

  FUNC_8(VAR_4);
  FUNC_7(VAR_4);
  VAR_4->streamon_cap = 1;
  return 0;
 }

 if (VAR_4->codec_state != VAR_3)
  return 0;

reconfigure:
 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_9(VAR_4, VAR_4->num_input_bufs,
     VAR_1, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5)
  goto free_dpb_bufs;

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5)
  goto free_dpb_bufs;

 FUNC_6(VAR_4->core);

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  goto free_dpb_bufs;

 VAR_4->codec_state = VAR_2;

 VAR_4->streamon_cap = 1;
 VAR_4->sequence_cap = 0;
 VAR_4->reconfig = 0;

 return 0;

free_dpb_bufs:
 FUNC_4(VAR_4);
err:
 return VAR_5;
}
