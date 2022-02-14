
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int pkt_size; } ;
struct TYPE_4__ {TYPE_1__ xsum_sz; } ;
struct rx_return_desc {int num_buf; TYPE_2__ xsz; } ;
struct atl1_adapter {int rx_buffer_len; } ;


 int FUNC_0 (struct atl1_adapter*,struct rx_return_desc*,int) ;

__attribute__((used)) static void FUNC_1(struct atl1_adapter *VAR_0,
 struct rx_return_desc *VAR_1)
{
 u16 VAR_2;

 VAR_2 = (VAR_1->xsz.xsum_sz.pkt_size + VAR_0->rx_buffer_len - 1) /
  VAR_0->rx_buffer_len;
 if (VAR_1->num_buf == VAR_2)

  FUNC_0(VAR_0, VAR_1, VAR_2);
}
