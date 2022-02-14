
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
struct lmac {scalar_t__ lmac_type; int * phydev; int dmacs; int is_sgmii; scalar_t__ check_link; int dwork; } ;
struct bgx {struct lmac* lmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct bgx*,size_t) ;
 int FUNC_1 (struct bgx*,size_t,int ,int ,int) ;
 int FUNC_2 (struct bgx*,size_t,int ,int ) ;
 int FUNC_3 (struct bgx*,size_t,int ) ;
 int FUNC_4 (struct bgx*,size_t,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct bgx *VAR_14, u8 VAR_15)
{
 struct lmac *VAR_16;
 u64 VAR_17;

 VAR_16 = &VAR_14->lmac[VAR_15];
 if (VAR_16->check_link) {

  FUNC_5(&VAR_16->dwork);
  FUNC_6(VAR_16->check_link);
 }


 VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_0);
 VAR_17 &= ~VAR_10;
 FUNC_4(VAR_14, VAR_15, VAR_0, VAR_17);


 FUNC_1(VAR_14, VAR_15, VAR_1, (u64)0x1FFF, 1);
 FUNC_1(VAR_14, VAR_15, VAR_2, (u64)0x3FFF, 1);


 VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_0);
 VAR_17 &= ~VAR_11;
 FUNC_4(VAR_14, VAR_15, VAR_0, VAR_17);


        if (!VAR_16->is_sgmii)
                FUNC_2(VAR_14, VAR_15,
                               VAR_8, VAR_13);
        else
                FUNC_2(VAR_14, VAR_15,
                               VAR_3, VAR_12);


 VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_0);
 VAR_17 &= ~VAR_9;
 FUNC_4(VAR_14, VAR_15, VAR_0, VAR_17);

 FUNC_0(VAR_14, VAR_15);
 FUNC_7(VAR_16->dmacs);

 if ((VAR_16->lmac_type != VAR_6) &&
     (VAR_16->lmac_type != VAR_7) &&
     (VAR_16->lmac_type != VAR_5) &&
     (VAR_16->lmac_type != VAR_4) && VAR_16->phydev)
  FUNC_8(VAR_16->phydev);

 VAR_16->phydev = ((void*)0);
}
