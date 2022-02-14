
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int dma_bitmode; scalar_t__ rda_laddr; scalar_t__ rra_laddr; scalar_t__ tda_laddr; scalar_t__ cda_laddr; scalar_t__ descriptors_laddr; int * rda; int * rra; int * tda; int * cda; int * descriptors; int device; } ;
struct net_device {unsigned int* dev_addr; int base_addr; int watchdog_timeo; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int ,int) ;
 int VAR_20 ;
 int * FUNC_3 (int ,int,scalar_t__*,int ) ;
 int VAR_21 ;
 int* VAR_22 ;
 struct sonic_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_24)
{
 unsigned int VAR_25;
 unsigned int VAR_26;
 struct sonic_local *VAR_27 = FUNC_4(VAR_24);
 int VAR_28 = -VAR_1;
 int VAR_29;

 if (!FUNC_7(VAR_24->base_addr, VAR_15, VAR_21))
  return -VAR_0;






 VAR_25 = FUNC_1(VAR_19);
 VAR_29 = 0;
 while (VAR_22[VAR_29] != 0xffff &&
        VAR_22[VAR_29] != VAR_25)
  VAR_29++;

 if (VAR_22[VAR_29] == 0xffff) {
  FUNC_5("SONIC ethernet controller not found (0x%4x)\n",
   VAR_25);
  goto out;
 }





 FUNC_2(VAR_11,VAR_13);
 FUNC_2(VAR_10,0);
 for (VAR_29=0; VAR_29<3; VAR_29++) {
  VAR_26 = FUNC_1(VAR_9-VAR_29);
  VAR_24->dev_addr[VAR_29*2] = VAR_26;
  VAR_24->dev_addr[VAR_29*2+1] = VAR_26 >> 8;
 }

 VAR_28 = -VAR_2;



 VAR_27->dma_bitmode = VAR_8;



 VAR_27->descriptors = FUNC_3(VAR_27->device,
          VAR_5 *
          FUNC_0(VAR_27->dma_bitmode),
          &VAR_27->descriptors_laddr,
          VAR_3);
 if (VAR_27->descriptors == ((void*)0))
  goto out;


 VAR_27->cda = VAR_27->descriptors;
 VAR_27->tda = VAR_27->cda + (VAR_4
                      * FUNC_0(VAR_27->dma_bitmode));
 VAR_27->rda = VAR_27->tda + (VAR_7 * VAR_18
                      * FUNC_0(VAR_27->dma_bitmode));
 VAR_27->rra = VAR_27->rda + (VAR_6 * VAR_17
                      * FUNC_0(VAR_27->dma_bitmode));

 VAR_27->cda_laddr = VAR_27->descriptors_laddr;
 VAR_27->tda_laddr = VAR_27->cda_laddr + (VAR_4
                      * FUNC_0(VAR_27->dma_bitmode));
 VAR_27->rda_laddr = VAR_27->tda_laddr + (VAR_7 * VAR_18
                      * FUNC_0(VAR_27->dma_bitmode));
 VAR_27->rra_laddr = VAR_27->rda_laddr + (VAR_6 * VAR_17
                      * FUNC_0(VAR_27->dma_bitmode));

 VAR_24->netdev_ops = &VAR_23;
 VAR_24->watchdog_timeo = VAR_20;




 FUNC_2(VAR_12,0xffff);
 FUNC_2(VAR_14,0xffff);
 FUNC_2(VAR_16,0xffff);

 return 0;
out:
 FUNC_6(VAR_24->base_addr, VAR_15);
 return VAR_28;
}
