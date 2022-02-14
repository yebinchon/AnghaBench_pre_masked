
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_cle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct xgene_enet_cle*,int*,int,int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct xgene_enet_cle *VAR_8)
{
 u32 VAR_9 = VAR_1 / sizeof(u32);
 u32 VAR_10 = VAR_2;
 u32 VAR_11, VAR_12 = 0;
 u32 VAR_13 = 5;
 u32 VAR_14;
 int VAR_15;


 VAR_14 = (VAR_10 << 5) | VAR_13;
 FUNC_1(0, VAR_4, VAR_6, VAR_14, &VAR_12);
 VAR_11 = VAR_12;


 VAR_14 = (VAR_10 << 5) | VAR_13;
 FUNC_1(1, VAR_4, VAR_7, VAR_14, &VAR_12);
 VAR_11 |= (VAR_12 << 16);

 VAR_15 = FUNC_0(VAR_8, &VAR_11, 1, VAR_9, VAR_3, VAR_0);
 if (VAR_15)
  return VAR_15;


 VAR_14 = (VAR_10 << 5) | VAR_13;
 FUNC_1(0, VAR_4, VAR_5,
         VAR_14, &VAR_12);
 VAR_11 = VAR_12;


 VAR_14 = (VAR_10 << 5);
 FUNC_1(0, VAR_4, VAR_5,
         VAR_14, &VAR_12);
 VAR_11 |= (VAR_12 << 16);

 VAR_15 = FUNC_0(VAR_8, &VAR_11, 1, VAR_9 + 1, VAR_3, VAR_0);
 if (VAR_15)
  return VAR_15;

 return 0;
}
