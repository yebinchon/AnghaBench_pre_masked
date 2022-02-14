
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
struct pkt_file {scalar_t__ buf_len; scalar_t__ pkt_len; int cur_addr; int pkt; } ;


 scalar_t__ FUNC_0 (struct pkt_file*) ;
 int FUNC_1 (int ,scalar_t__,int *,scalar_t__) ;

uint FUNC_2 (struct pkt_file *VAR_0, u8 *VAR_1, uint VAR_2)
{
 uint VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0);
 VAR_3 = (VAR_2 > VAR_3) ? VAR_3 : VAR_2;

 if (VAR_1)
  FUNC_1(VAR_0->pkt, VAR_0->buf_len - VAR_0->pkt_len, VAR_1, VAR_3);

 VAR_0->cur_addr += VAR_3;
 VAR_0->pkt_len -= VAR_3;
 return VAR_3;
}
