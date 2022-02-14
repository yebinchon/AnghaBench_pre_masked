
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int dma_bitmode; scalar_t__ rda_laddr; scalar_t__ rra_laddr; scalar_t__ tda_laddr; scalar_t__ cda_laddr; scalar_t__ descriptors_laddr; int * rda; int * rra; int * tda; int * cda; int * descriptors; int device; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int VAR_11 ;
 int * FUNC_2 (int ,int,scalar_t__*,int ) ;
 int VAR_12 ;
 struct sonic_local* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_13)
{
 struct sonic_local* VAR_14 = FUNC_3(VAR_13);



 VAR_14->descriptors = FUNC_2(VAR_14->device,
          VAR_3 *
          FUNC_0(VAR_14->dma_bitmode),
          &VAR_14->descriptors_laddr,
          VAR_1);
 if (VAR_14->descriptors == ((void*)0))
  return -VAR_0;


 VAR_14->cda = VAR_14->descriptors;
 VAR_14->tda = VAR_14->cda + (VAR_2
                      * FUNC_0(VAR_14->dma_bitmode));
 VAR_14->rda = VAR_14->tda + (VAR_5 * VAR_10
                      * FUNC_0(VAR_14->dma_bitmode));
 VAR_14->rra = VAR_14->rda + (VAR_4 * VAR_9
                      * FUNC_0(VAR_14->dma_bitmode));

 VAR_14->cda_laddr = VAR_14->descriptors_laddr;
 VAR_14->tda_laddr = VAR_14->cda_laddr + (VAR_2
                      * FUNC_0(VAR_14->dma_bitmode));
 VAR_14->rda_laddr = VAR_14->tda_laddr + (VAR_5 * VAR_10
                      * FUNC_0(VAR_14->dma_bitmode));
 VAR_14->rra_laddr = VAR_14->rda_laddr + (VAR_4 * VAR_9
                      * FUNC_0(VAR_14->dma_bitmode));

 VAR_13->netdev_ops = &VAR_12;
 VAR_13->watchdog_timeo = VAR_11;




 FUNC_1(VAR_6, 0xffff);
 FUNC_1(VAR_7, 0xffff);
 FUNC_1(VAR_8, 0xffff);

 return 0;
}
