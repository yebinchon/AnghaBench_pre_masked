
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
typedef int u32 ;
struct vsc73xx {int dev; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct vsc73xx*,int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_9, int VAR_10,
          uint64_t *VAR_11)
{
 struct vsc73xx *VAR_12 = VAR_9->priv;
 u8 VAR_13[] = {
  VAR_7,
  VAR_1,
  VAR_2,
  VAR_3,
  VAR_8,
  VAR_4,
  VAR_5,
  VAR_6,
 };
 u32 VAR_14;
 int VAR_15;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13); VAR_16++) {
  VAR_15 = FUNC_2(VAR_12, VAR_0, VAR_10,
       VAR_13[VAR_16], &VAR_14);
  if (VAR_15) {
   FUNC_1(VAR_12->dev, "error reading counter %d\n", VAR_16);
   return;
  }
  VAR_11[VAR_16] = VAR_14;
 }
}
