
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int length; unsigned int actual; scalar_t__ dma; } ;
struct net2272_request {TYPE_2__ req; } ;
struct TYPE_6__ {int name; } ;
struct net2272_ep {int num; int not_empty; TYPE_3__* dev; scalar_t__ is_in; TYPE_1__ ep; int dma; } ;
struct TYPE_8__ {int dma_eot_polarity; int dma_dack_polarity; int dma_dreq_polarity; scalar_t__ dma_busy; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int ,struct net2272_request*,unsigned long long) ;
 int FUNC_1 (struct net2272_ep*,int ) ;
 int FUNC_2 (struct net2272_ep*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,scalar_t__,unsigned int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_6(struct net2272_ep *VAR_18, struct net2272_request *VAR_19)
{
 unsigned VAR_20;
 u8 VAR_21;

 if (!VAR_17 || (VAR_18->num < 1) || (VAR_18->num > 2) || !VAR_18->dma)
  return -VAR_10;




 if (VAR_19->req.length & 1)
  return -VAR_10;

 FUNC_0(VAR_18->dev->dev, "kick_dma %s req %p dma %08llx\n",
  VAR_18->ep.name, VAR_19, (unsigned long long) VAR_19->req.dma);

 FUNC_2(VAR_18, VAR_14, 1 << VAR_0);


 if (VAR_18->dev->dma_busy)
  return -VAR_9;




 VAR_20 = VAR_19->req.length;
 VAR_20 &= ~1;


 if (VAR_18->is_in) {

  if (FUNC_3(VAR_18->dev, VAR_18->num, VAR_19->req.dma, VAR_20, 0))

   return -VAR_9;
  VAR_19->req.actual += VAR_20;


 } else {
  VAR_21 = FUNC_1(VAR_18, VAR_15);


  if (FUNC_3(VAR_18->dev, VAR_18->num, VAR_19->req.dma, VAR_20, 1))

   return -VAR_9;

  if (!(VAR_21 & (1 << VAR_1)))
   VAR_18->not_empty = 1;
  else
   VAR_18->not_empty = 0;



  FUNC_2(VAR_18, VAR_13, 1 << VAR_0);




  if (VAR_21 & (1 << VAR_16)) {


   FUNC_5(VAR_18->dev, VAR_3,
    (0 << VAR_4) |
    (0 << VAR_7) |
    (1 << VAR_5) |
    (VAR_18->dev->dma_eot_polarity << VAR_11) |
    (VAR_18->dev->dma_dack_polarity << VAR_2) |
    (VAR_18->dev->dma_dreq_polarity << VAR_8) |
    ((VAR_18->num >> 1) << VAR_6));

   return -VAR_9;
  }
 }


 FUNC_2(VAR_18, VAR_12, 0);

 FUNC_4(VAR_18->dev);

 return 0;
}
