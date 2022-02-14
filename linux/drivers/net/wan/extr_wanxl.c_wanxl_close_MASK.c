
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct port {int node; TYPE_4__** tx_skbs; TYPE_1__* card; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ stat; int address; } ;
typedef TYPE_2__ desc_t ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {TYPE_2__* tx_descs; scalar_t__ open; } ;
struct TYPE_5__ {int pdev; scalar_t__ plx; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 struct port* FUNC_1 (struct net_device*) ;
 TYPE_3__* FUNC_2 (struct port*) ;
 int FUNC_3 (struct net_device*) ;
 unsigned long VAR_6 ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct port *VAR_8 = FUNC_1(VAR_7);
 unsigned long VAR_9;
 int VAR_10;

 FUNC_3(VAR_7);

 FUNC_8(1 << (VAR_0 + VAR_8->node),
        VAR_8->card->plx + VAR_4);

 VAR_9 = VAR_6 + VAR_1;
 do {
  if (!FUNC_2(VAR_8)->open)
   break;
 } while (FUNC_7(VAR_9, VAR_6));

 if (FUNC_2(VAR_8)->open)
  FUNC_4(VAR_7, "unable to close port\n");

 FUNC_5(VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  desc_t *VAR_11 = &FUNC_2(VAR_8)->tx_descs[VAR_10];

  if (VAR_11->stat != VAR_2) {
   VAR_11->stat = VAR_2;
   FUNC_6(VAR_8->card->pdev, VAR_11->address,
      VAR_8->tx_skbs[VAR_10]->len,
      VAR_3);
   FUNC_0(VAR_8->tx_skbs[VAR_10]);
  }
 }
 return 0;
}
