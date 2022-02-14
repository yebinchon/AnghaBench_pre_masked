
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {int cgx_links; int lbk_links; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_2, int VAR_3,
     int VAR_4, int VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_2->hw;
 int VAR_7;


 if (VAR_4 == VAR_1)
  FUNC_2(VAR_2, VAR_3, FUNC_1(VAR_5), 0x00);

 if (VAR_4 != VAR_0)
  return;


 for (VAR_7 = 0; VAR_7 < (VAR_6->cgx_links + VAR_6->lbk_links); VAR_7++)
  FUNC_2(VAR_2, VAR_3,
       FUNC_0(VAR_5, VAR_7), 0x00);
}
