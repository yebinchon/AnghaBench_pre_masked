
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_card {int tx_emitted; TYPE_1__* tx_buffer; int write; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ data; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct lcs_card *VAR_1)
{
 FUNC_0(5, VAR_0, "emittx");
 *(__u16 *)(VAR_1->tx_buffer->data + VAR_1->tx_buffer->count) = 0;
 VAR_1->tx_buffer->count += 2;
 FUNC_1(&VAR_1->write, VAR_1->tx_buffer);
 VAR_1->tx_buffer = ((void*)0);
 VAR_1->tx_emitted++;
}
