
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct vnt_private {int dummy; } ;
struct vnt_phy_field {scalar_t__ service; scalar_t__ signal; int len; } ;


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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct vnt_private*,int ,int ,int ,int,scalar_t__*) ;
 int FUNC_3 (struct vnt_private*,int ) ;
 int FUNC_4 (struct vnt_private*,int ) ;
 int FUNC_5 (struct vnt_private*,int,int ,int ,struct vnt_phy_field*) ;

void FUNC_6(struct vnt_private *VAR_16, u8 VAR_17)
{
 struct vnt_phy_field VAR_18[4];
 u8 VAR_19[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
 u8 VAR_20[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
 u8 VAR_21[34];
 int VAR_22;


 FUNC_5(VAR_16, 14, FUNC_3(VAR_16, VAR_7),
     VAR_3, &VAR_18[0]);


 FUNC_5(VAR_16, 14, FUNC_3(VAR_16, VAR_9),
     VAR_3, &VAR_18[1]);


 FUNC_5(VAR_16, 14, FUNC_3(VAR_16, VAR_13),
     VAR_3, &VAR_18[2]);


 FUNC_5(VAR_16, 14, FUNC_3(VAR_16, VAR_4),
     VAR_3, &VAR_18[3]);


 FUNC_1(VAR_14, VAR_17, &VAR_19[0], &VAR_20[0]);


 FUNC_1(VAR_15, VAR_17, &VAR_19[1], &VAR_20[1]);


 FUNC_1(VAR_5, VAR_17, &VAR_19[2], &VAR_20[2]);


 FUNC_1(VAR_6, VAR_17, &VAR_19[3], &VAR_20[3]);


 FUNC_1(VAR_8, VAR_17, &VAR_19[4], &VAR_20[4]);


 FUNC_1(FUNC_4(VAR_16, VAR_10),
    VAR_17, &VAR_19[5], &VAR_20[5]);


 FUNC_1(FUNC_4(VAR_16, VAR_11),
    VAR_17, &VAR_19[6], &VAR_20[6]);


 FUNC_1(FUNC_4(VAR_16, VAR_12),
    VAR_17, &VAR_19[7], &VAR_20[7]);


 FUNC_1(FUNC_4(VAR_16, VAR_12),
    VAR_17, &VAR_19[8], &VAR_20[8]);

 FUNC_0(VAR_18[0].len, (u16 *)&VAR_21[0]);
 VAR_21[2] = VAR_18[0].signal;
 VAR_21[3] = VAR_18[0].service;

 FUNC_0(VAR_18[1].len, (u16 *)&VAR_21[4]);
 VAR_21[6] = VAR_18[1].signal;
 VAR_21[7] = VAR_18[1].service;

 FUNC_0(VAR_18[2].len, (u16 *)&VAR_21[8]);
 VAR_21[10] = VAR_18[2].signal;
 VAR_21[11] = VAR_18[2].service;

 FUNC_0(VAR_18[3].len, (u16 *)&VAR_21[12]);
 VAR_21[14] = VAR_18[3].signal;
 VAR_21[15] = VAR_18[3].service;

 for (VAR_22 = 0; VAR_22 < 9; VAR_22++) {
  VAR_21[16 + VAR_22 * 2] = VAR_19[VAR_22];
  VAR_21[16 + VAR_22 * 2 + 1] = VAR_20[VAR_22];
 }

 FUNC_2(VAR_16, VAR_2, VAR_0,
   VAR_1, 34, &VAR_21[0]);
}
