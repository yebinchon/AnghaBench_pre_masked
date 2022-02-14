
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int * ptable; } ;
typedef int s8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int FUNC_0 (char*,int ,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wl1271*,int ,int*) ;
 int FUNC_3 (struct wl1271*,int *) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_16, s8 *VAR_17)
{
 u32 VAR_18;
 s8 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 int VAR_24;

 VAR_24 = FUNC_3(VAR_16, &VAR_16->ptable[VAR_1]);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_16, VAR_13, &VAR_18);
 if (VAR_24 < 0)
  goto out;

 VAR_23 = (VAR_18 >> VAR_6) & 1;

 VAR_24 = FUNC_2(VAR_16, VAR_12, &VAR_18);
 if (VAR_24 < 0)
  goto out;

 VAR_21 = (VAR_18 & VAR_8) >> VAR_9;
 VAR_19 = (VAR_18 & VAR_14) >> VAR_15;

 if ((VAR_19 <= 0xE) && (VAR_23 == VAR_7))
  VAR_20 = (VAR_18 & VAR_2) >>
   VAR_3;
 else
  VAR_20 = (VAR_18 & VAR_4) >>
   VAR_5;

 VAR_24 = FUNC_2(VAR_16, VAR_13, &VAR_18);
 if (VAR_24 < 0)
  goto out;

 VAR_22 = (VAR_18 & VAR_10) >> VAR_11;

 FUNC_0("wl18xx HW: %s, PG %d.%d (ROM 0x%x)",
      FUNC_1(VAR_22), VAR_21, VAR_20, VAR_19);

 if (VAR_17)
  *VAR_17 = VAR_21;

 VAR_24 = FUNC_3(VAR_16, &VAR_16->ptable[VAR_0]);

out:
 return VAR_24;
}
