
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_tx_queue {int next_desc_to_proc; struct mvpp2_tx_desc* descs; } ;
struct mvpp2_tx_desc {int dummy; } ;


 int FUNC_0 (struct mvpp2_tx_queue*,int) ;

__attribute__((used)) static struct mvpp2_tx_desc *
FUNC_1(struct mvpp2_tx_queue *VAR_0)
{
 int VAR_1 = VAR_0->next_desc_to_proc;

 VAR_0->next_desc_to_proc = FUNC_0(VAR_0, VAR_1);
 return VAR_0->descs + VAR_1;
}
