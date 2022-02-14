
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu_hwinfo {int cgx_links; int lbk_links; int cgx; int lmac_per_cgx; scalar_t__ sdp_links; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,struct rvu*) ;
 int FUNC_6 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rvu *VAR_4, int VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_4->hw;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 u64 VAR_11;







 for (VAR_10 = 0; VAR_10 < (VAR_6->cgx_links + VAR_6->lbk_links); VAR_10++) {
  FUNC_6(VAR_4, VAR_5, FUNC_1(VAR_10),
       VAR_1 << 16 | VAR_2);
 }

 if (VAR_6->sdp_links) {
  VAR_10 = VAR_6->cgx_links + VAR_6->lbk_links;
  FUNC_6(VAR_4, VAR_5, FUNC_1(VAR_10),
       VAR_3 << 16 | VAR_2);
 }




 for (VAR_7 = 0; VAR_7 < VAR_6->cgx; VAR_7++) {
  VAR_8 = FUNC_4(FUNC_5(VAR_7, VAR_4));
  VAR_11 = ((VAR_0 / VAR_8) - VAR_1) / 16;

  VAR_11 = (VAR_11 << 12) | (0x1FF << 2) | FUNC_0(1);
  VAR_9 = VAR_7 * VAR_6->lmac_per_cgx;
  for (VAR_10 = VAR_9; VAR_10 < (VAR_9 + VAR_8); VAR_10++) {
   FUNC_6(VAR_4, VAR_5,
        FUNC_3(VAR_10),
        VAR_11);
   FUNC_6(VAR_4, VAR_5,
        FUNC_2(VAR_10),
        VAR_11);
  }
 }


 VAR_9 = VAR_6->cgx_links;
 for (VAR_10 = VAR_9; VAR_10 < (VAR_9 + VAR_6->lbk_links); VAR_10++) {
  VAR_11 = 1000;

  VAR_11 = (VAR_11 << 12) | (0x1FF << 2) | FUNC_0(1);
  FUNC_6(VAR_4, VAR_5,
       FUNC_3(VAR_10), VAR_11);
  FUNC_6(VAR_4, VAR_5,
       FUNC_2(VAR_10), VAR_11);
 }
}
