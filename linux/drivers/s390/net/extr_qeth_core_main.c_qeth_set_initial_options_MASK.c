
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* type; } ;
struct TYPE_4__ {void* type; } ;
struct TYPE_6__ {int layer; int cq; int isolation; int rx_sg_cb; TYPE_2__ route6; TYPE_1__ route4; } ;
struct qeth_card {TYPE_3__ options; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct qeth_card *VAR_5)
{
 VAR_5->options.route4.type = VAR_1;
 VAR_5->options.route6.type = VAR_1;
 VAR_5->options.rx_sg_cb = VAR_4;
 VAR_5->options.isolation = VAR_0;
 VAR_5->options.cq = VAR_2;
 VAR_5->options.layer = VAR_3;
}
