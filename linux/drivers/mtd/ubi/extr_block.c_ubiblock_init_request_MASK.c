
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sg; } ;
struct ubiblock_pdu {int work; TYPE_1__ usgl; } ;
struct request {int dummy; } ;
struct blk_mq_tag_set {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct ubiblock_pdu* FUNC_1 (struct request*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_2,
  struct request *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5)
{
 struct ubiblock_pdu *VAR_6 = FUNC_1(VAR_3);

 FUNC_2(VAR_6->usgl.sg, VAR_0);
 FUNC_0(&VAR_6->work, VAR_1);

 return 0;
}
