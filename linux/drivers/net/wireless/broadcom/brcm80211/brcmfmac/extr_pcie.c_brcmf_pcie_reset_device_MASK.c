
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct brcmf_pciedev_info {int ci; int pdev; } ;
struct brcmf_core {int rev; } ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ,int) ;
 struct brcmf_core* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 size_t FUNC_4 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_5 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_6 (struct brcmf_pciedev_info*,int ,size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,size_t*) ;
 int FUNC_9 (int ,int ,size_t) ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_10(struct brcmf_pciedev_info *VAR_19)
{
 struct brcmf_core *VAR_20;
 u16 VAR_21[] = { VAR_12,
        VAR_8,
        VAR_5,
        VAR_4,
        VAR_3,
        VAR_6,
        VAR_2,
        VAR_9,
        VAR_7,
        VAR_10,
        VAR_11 };
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 if (!VAR_19->ci)
  return;


 FUNC_5(VAR_19, VAR_1);
 FUNC_8(VAR_19->pdev, VAR_16,
         &VAR_24);
 VAR_23 = VAR_24 & (~VAR_13);
 FUNC_9(VAR_19->pdev, VAR_16,
          VAR_23);


 FUNC_5(VAR_19, VAR_0);
 FUNC_1(VAR_19, VAR_18, 4);
 FUNC_7(100);


 FUNC_5(VAR_19, VAR_1);
 FUNC_9(VAR_19->pdev, VAR_16,
          VAR_24);

 VAR_20 = FUNC_2(VAR_19->ci, VAR_1);
 if (VAR_20->rev <= 13) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_21); VAR_22++) {
   FUNC_6(VAR_19,
            VAR_14,
            VAR_21[VAR_22]);
   VAR_23 = FUNC_4(VAR_19,
    VAR_15);
   FUNC_3(VAR_17, "config offset 0x%04x, value 0x%04x\n",
      VAR_21[VAR_22], VAR_23);
   FUNC_6(VAR_19,
            VAR_15,
            VAR_23);
  }
 }
}
