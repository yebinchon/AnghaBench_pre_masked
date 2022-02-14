
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codec_mpeg12 {int workspace_paddr; scalar_t__ workspace_vaddr; } ;
struct amvdec_session {struct amvdec_core* core; struct codec_mpeg12* priv; } ;
struct amvdec_core {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct amvdec_session *VAR_1)
{
 struct codec_mpeg12 *VAR_2 = VAR_1->priv;
 struct amvdec_core *VAR_3 = VAR_1->core;

 if (VAR_2->workspace_vaddr)
  FUNC_0(VAR_3->dev, VAR_0,
      VAR_2->workspace_vaddr,
      VAR_2->workspace_paddr);

 return 0;
}
