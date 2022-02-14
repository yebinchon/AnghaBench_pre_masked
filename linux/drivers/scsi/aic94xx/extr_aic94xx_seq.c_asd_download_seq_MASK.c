
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct asd_ha_struct {int pcidev; } ;
struct asd_dma_tok {int dma_handle; int vaddr; } ;


 int FUNC_0 (char*,int) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct asd_dma_tok* FUNC_1 (struct asd_ha_struct*,int,int ) ;
 int FUNC_2 (struct asd_ha_struct*,struct asd_dma_tok*) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (struct asd_ha_struct*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct asd_ha_struct*,int ) ;
 int FUNC_7 (struct asd_ha_struct*,scalar_t__ const* const,int,scalar_t__) ;
 int FUNC_8 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_9 (struct asd_ha_struct*,int ,int) ;
 int FUNC_10 (int ,scalar_t__ const* const,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct asd_ha_struct *VAR_24,
       const u8 * const VAR_25, u32 VAR_26, u8 VAR_27)
{
 u32 VAR_28;
 u32 VAR_29;
 int VAR_30;
 const int VAR_31 = (VAR_26 + VAR_10 - 1) / VAR_10;
 struct asd_dma_tok *VAR_32;
 int VAR_33 = 0;

 if (VAR_26 % 4) {
  FUNC_5("sequencer program not multiple of 4\n");
  return -1;
 }

 FUNC_3(VAR_24);
 FUNC_4(VAR_24, 0xFF);


 VAR_28 = FUNC_6(VAR_24, VAR_4);
 FUNC_9(VAR_24, VAR_4, 0);
 FUNC_9(VAR_24, VAR_3, VAR_5);

 FUNC_9(VAR_24, VAR_1, VAR_22);
 FUNC_9(VAR_24, VAR_0, VAR_2);

 VAR_32 = FUNC_1(VAR_24, VAR_10, VAR_9);
 if (!VAR_32) {
  FUNC_5("out of memory for dma SEQ download\n");
  VAR_33 = -VAR_8;
  goto out;
 }
 FUNC_0("dma-ing %d bytes\n", VAR_26);

 for (VAR_30 = 0; VAR_30 < VAR_31; VAR_30++) {
  int VAR_34;
  u32 VAR_35 = FUNC_11(VAR_26-VAR_30*VAR_10,
          (u32)VAR_10);

  FUNC_10(VAR_32->vaddr, VAR_25 + VAR_30*VAR_10, VAR_35);
  FUNC_8(VAR_24, VAR_13, VAR_32->dma_handle);
  FUNC_9(VAR_24, VAR_14, VAR_35);
  VAR_29 = !VAR_30 ? VAR_21 : 0;
  VAR_29 |= (VAR_23 | VAR_18);
  VAR_29 |= (VAR_27 ? (((u32)VAR_27) << 8) : VAR_11);

  FUNC_9(VAR_24, VAR_15, VAR_29);

  for (VAR_34 = VAR_20*100; VAR_34 > 0; VAR_34--) {
   u32 VAR_36 = FUNC_6(VAR_24, VAR_15);
   if (!(VAR_36 & VAR_12))
    break;
   FUNC_13(VAR_19);
  }
 }

 VAR_29 = FUNC_6(VAR_24, VAR_3);
 if (!(VAR_29 & VAR_16) || (VAR_29 & VAR_17)
     || (FUNC_6(VAR_24, VAR_0) & VAR_6)){
  FUNC_5("%s: error DMA-ing sequencer code\n",
      FUNC_12(VAR_24->pcidev));
  VAR_33 = -VAR_7;
 }

 FUNC_2(VAR_24, VAR_32);
 out:
 FUNC_9(VAR_24, VAR_4, VAR_28);

 return VAR_33 ? : FUNC_7(VAR_24, VAR_25, VAR_26, VAR_27);
}
