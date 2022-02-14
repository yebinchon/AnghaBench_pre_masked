
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wl18xx_mac_and_phy_params {int dummy; } ;
struct wl1271 {int * ptable; int irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct wl1271*,int ,int *) ;
 int FUNC_6 (struct wl1271*,int ,int ) ;
 int FUNC_7 (struct wl1271*,int ,int *) ;
 int FUNC_8 (struct wl1271*,int ,int *) ;
 int FUNC_9 (struct wl1271*,int *) ;
 int FUNC_10 (struct wl1271*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct wl1271 *VAR_15)
{
 u32 VAR_16;
 int VAR_17;
 u16 VAR_18;

 FUNC_1(sizeof(struct wl18xx_mac_and_phy_params) >
  VAR_13);

 VAR_17 = FUNC_9(VAR_15, &VAR_15->ptable[VAR_6]);
 if (VAR_17 < 0)
  goto out;


 VAR_17 = FUNC_10(VAR_15, VAR_11, VAR_11);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_8(VAR_15, VAR_9, &VAR_16);
 if (VAR_17 < 0)
  goto out;

 FUNC_3(VAR_0, "chip id 0x%x", VAR_16);

 VAR_17 = FUNC_7(VAR_15, VAR_14, &VAR_16);
 if (VAR_17 < 0)
  goto out;
 VAR_17 = FUNC_9(VAR_15, &VAR_15->ptable[VAR_7]);
 if (VAR_17 < 0)
  goto out;


 VAR_17 = FUNC_10(VAR_15, VAR_12,
        VAR_3);
 if (VAR_17 < 0)
  goto out;


 VAR_17 = FUNC_10(VAR_15, VAR_12,
        VAR_5);
 if (VAR_17 < 0)
  goto out;


 VAR_17 = FUNC_10(VAR_15, VAR_12,
        VAR_4);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_2(VAR_15->irq);
 if ((VAR_17 == VAR_2) || (VAR_17 == VAR_1)) {
  FUNC_4("using inverted interrupt logic: %d", VAR_17);
  VAR_17 = FUNC_9(VAR_15,
        &VAR_15->ptable[VAR_8]);
  if (VAR_17 < 0)
   goto out;

  VAR_17 = FUNC_5(VAR_15, VAR_10, &VAR_18);
  if (VAR_17 < 0)
   goto out;

  VAR_18 |= FUNC_0(1);
  VAR_17 = FUNC_6(VAR_15, VAR_10, VAR_18);
  if (VAR_17 < 0)
   goto out;

  VAR_17 = FUNC_9(VAR_15, &VAR_15->ptable[VAR_7]);
 }

out:
 return VAR_17;
}
