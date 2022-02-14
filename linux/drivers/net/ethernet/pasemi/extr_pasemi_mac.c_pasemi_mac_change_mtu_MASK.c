
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pasemi_mac {int napi; int dma_if; scalar_t__ bufsz; int num_cs; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {scalar_t__ next_to_fill; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pasemi_mac* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (struct pasemi_mac*) ;
 int FUNC_10 (struct pasemi_mac*) ;
 int FUNC_11 (struct pasemi_mac*) ;
 int FUNC_12 (struct pasemi_mac*) ;
 int FUNC_13 (struct net_device*,scalar_t__) ;
 int FUNC_14 (struct pasemi_mac*) ;
 unsigned int FUNC_15 (int ) ;
 unsigned int FUNC_16 (struct pasemi_mac*,int ) ;
 TYPE_1__* FUNC_17 (struct pasemi_mac*) ;
 int FUNC_18 (int ,unsigned int) ;
 int FUNC_19 (struct pasemi_mac*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_9, int VAR_10)
{
 struct pasemi_mac *VAR_11 = FUNC_4(VAR_9);
 unsigned int VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_5(VAR_9);

 if (VAR_14) {






  FUNC_2(&VAR_11->napi);
  FUNC_7(VAR_9);
  FUNC_10(VAR_11);

  VAR_13 = FUNC_15(FUNC_0(VAR_11->dma_if));
  FUNC_12(VAR_11);
  FUNC_8(FUNC_17(VAR_11), VAR_8);
  FUNC_9(VAR_11);

 }


 if (VAR_10 > VAR_7 && !VAR_11->num_cs) {
  FUNC_14(VAR_11);
  if (!VAR_11->num_cs) {
   VAR_15 = -VAR_0;
   goto out;
  }
 }




 VAR_12 = FUNC_16(VAR_11, VAR_5);
 VAR_12 &= ~VAR_6;
 VAR_12 |= FUNC_1(VAR_10 + VAR_2 + 4);
 FUNC_19(VAR_11, VAR_5, VAR_12);

 VAR_9->mtu = VAR_10;

 VAR_11->bufsz = VAR_10 + VAR_2 + VAR_1 + VAR_3 + 128;

out:
 if (VAR_14) {
  FUNC_18(FUNC_0(VAR_11->dma_if),
         VAR_13 | VAR_4);

  FUNC_17(VAR_11)->next_to_fill = 0;
  FUNC_13(VAR_9, VAR_8-1);

  FUNC_3(&VAR_11->napi);
  FUNC_6(VAR_9);
  FUNC_11(VAR_11);
 }

 return VAR_15;
}
