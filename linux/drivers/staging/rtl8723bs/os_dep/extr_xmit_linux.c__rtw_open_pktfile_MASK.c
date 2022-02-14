
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pkt_file {int buf_start; int cur_buffer; int buf_len; int pkt_len; int cur_addr; TYPE_1__* pkt; } ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ _pkt ;



void FUNC_0 (_pkt *VAR_0, struct pkt_file *VAR_1)
{
 VAR_1->pkt = VAR_0;
 VAR_1->cur_addr = VAR_1->buf_start = VAR_0->data;
 VAR_1->pkt_len = VAR_1->buf_len = VAR_0->len;

 VAR_1->cur_buffer = VAR_1->buf_start ;
}
