
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_flush_completion {int err; int cmplt; } ;
struct cmdq_cb_data {scalar_t__ sta; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cmdq_cb_data VAR_1)
{
 struct cmdq_flush_completion *VAR_2;

 VAR_2 = (struct cmdq_flush_completion *)VAR_1.data;
 if (VAR_1.sta != VAR_0)
  VAR_2->err = 1;
 else
  VAR_2->err = 0;
 FUNC_0(&VAR_2->cmplt);
}
