
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_pkt {int dummy; } ;
struct cmdq_flush_completion {int err; int cmplt; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_pkt*,int ,struct cmdq_flush_completion*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cmdq_pkt *VAR_2)
{
 struct cmdq_flush_completion VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3.cmplt);
 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_2(&VAR_3.cmplt);

 return VAR_3.err ? -VAR_0 : 0;
}
