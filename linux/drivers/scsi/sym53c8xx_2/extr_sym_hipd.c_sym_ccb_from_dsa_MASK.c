
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sym_hcb {struct sym_ccb** ccbh; } ;
struct sym_ccb {scalar_t__ ccb_ba; struct sym_ccb* link_ccbh; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct sym_ccb *FUNC_1(struct sym_hcb *VAR_0, u32 VAR_1)
{
 int VAR_2;
 struct sym_ccb *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_0->ccbh[VAR_2];
 while (VAR_3) {
  if (VAR_3->ccb_ba == VAR_1)
   break;
  VAR_3 = VAR_3->link_ccbh;
 }

 return VAR_3;
}
