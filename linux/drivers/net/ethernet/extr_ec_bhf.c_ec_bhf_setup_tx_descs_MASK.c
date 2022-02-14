
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sent; } ;
struct tx_desc {TYPE_1__ header; } ;
struct TYPE_4__ {int len; scalar_t__ buf; } ;
struct ec_bhf_priv {int tx_dcount; struct tx_desc* tx_descs; scalar_t__ tx_dnext; TYPE_2__ tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ec_bhf_priv *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->tx_dcount = VAR_1->tx_buf.len / sizeof(struct tx_desc);
 VAR_1->tx_descs = (struct tx_desc *)VAR_1->tx_buf.buf;
 VAR_1->tx_dnext = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->tx_dcount; VAR_2++)
  VAR_1->tx_descs[VAR_2].header.sent = FUNC_0(VAR_0);
}
