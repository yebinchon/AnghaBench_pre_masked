
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct idmac_desc_64addr {int des6; int des7; int des0; void* des3; scalar_t__ des1; scalar_t__ des2; } ;
struct idmac_desc {int des6; int des7; int des0; void* des3; scalar_t__ des1; scalar_t__ des2; } ;
struct dw_mci {int dma_64bit_address; int ring_size; int sg_dma; struct idmac_desc_64addr* sg_cpu; } ;


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
 void* FUNC_0 (int) ;
 int FUNC_1 (struct dw_mci*) ;
 int FUNC_2 (struct dw_mci*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dw_mci *VAR_13)
{
 int VAR_14;

 if (VAR_13->dma_64bit_address == 1) {
  struct idmac_desc_64addr *VAR_15;

  VAR_13->ring_size =
   VAR_3 / sizeof(struct idmac_desc_64addr);


  for (VAR_14 = 0, VAR_15 = VAR_13->sg_cpu; VAR_14 < VAR_13->ring_size - 1;
        VAR_14++, VAR_15++) {
   VAR_15->des6 = (VAR_13->sg_dma +
     (sizeof(struct idmac_desc_64addr) *
       (VAR_14 + 1))) & 0xffffffff;

   VAR_15->des7 = (u64)(VAR_13->sg_dma +
     (sizeof(struct idmac_desc_64addr) *
       (VAR_14 + 1))) >> 32;

   VAR_15->des0 = 0;
   VAR_15->des1 = 0;
   VAR_15->des2 = 0;
   VAR_15->des3 = 0;
  }


  VAR_15->des6 = VAR_13->sg_dma & 0xffffffff;
  VAR_15->des7 = (u64)VAR_13->sg_dma >> 32;
  VAR_15->des0 = VAR_6;

 } else {
  struct idmac_desc *VAR_16;

  VAR_13->ring_size =
   VAR_3 / sizeof(struct idmac_desc);


  for (VAR_14 = 0, VAR_16 = VAR_13->sg_cpu;
       VAR_14 < VAR_13->ring_size - 1;
       VAR_14++, VAR_16++) {
   VAR_16->des3 = FUNC_0(VAR_13->sg_dma +
     (sizeof(struct idmac_desc) * (VAR_14 + 1)));
   VAR_16->des0 = 0;
   VAR_16->des1 = 0;
  }


  VAR_16->des3 = FUNC_0(VAR_13->sg_dma);
  VAR_16->des0 = FUNC_0(VAR_6);
 }

 FUNC_1(VAR_13);

 if (VAR_13->dma_64bit_address == 1) {

  FUNC_2(VAR_13, VAR_9, VAR_7);
  FUNC_2(VAR_13, VAR_5, VAR_10 |
    VAR_11 | VAR_12);


  FUNC_2(VAR_13, VAR_1, VAR_13->sg_dma & 0xffffffff);
  FUNC_2(VAR_13, VAR_2, (u64)VAR_13->sg_dma >> 32);

 } else {

  FUNC_2(VAR_13, VAR_8, VAR_7);
  FUNC_2(VAR_13, VAR_4, VAR_10 |
    VAR_11 | VAR_12);


  FUNC_2(VAR_13, VAR_0, VAR_13->sg_dma);
 }

 return 0;
}
