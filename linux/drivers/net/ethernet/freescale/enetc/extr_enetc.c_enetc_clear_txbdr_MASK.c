
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_hw {int dummy; } ;
struct enetc_bdr {int index; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct enetc_hw*,int,int ) ;
 int FUNC_1 (struct enetc_hw*,int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct enetc_hw *VAR_3, struct enetc_bdr *VAR_4)
{
 int VAR_5 = 8, VAR_6 = 100;
 int VAR_7 = VAR_4->index;


 FUNC_1(VAR_3, VAR_7, VAR_0, 0);


 while (VAR_5 < VAR_6 &&
        FUNC_0(VAR_3, VAR_7, VAR_1) & VAR_2) {
  FUNC_2(VAR_5);
  VAR_5 *= 2;
 }

 if (VAR_5 >= VAR_6)
  FUNC_3(VAR_4->ndev, "timeout for tx ring #%d clear\n",
       VAR_7);
}
