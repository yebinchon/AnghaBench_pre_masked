
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;
typedef scalar_t__ irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (struct hisi_hba*,int ) ;
 scalar_t__ FUNC_2 (int,struct hisi_hba*) ;
 scalar_t__ FUNC_3 (int,struct hisi_hba*) ;
 scalar_t__ FUNC_4 (int,struct hisi_hba*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct hisi_hba *VAR_10 = VAR_9;
 u32 VAR_11;
 int VAR_12 = 0;
 irqreturn_t VAR_13 = VAR_6;

 VAR_11 = FUNC_1(VAR_10, VAR_4)
    & 0x11111111;
 while (VAR_11) {
  if (VAR_11 & 1) {
   u32 VAR_14 = FUNC_0(VAR_10, VAR_12,
           VAR_0);
   u32 VAR_15 = FUNC_1(VAR_10, VAR_7);
   int VAR_16 = VAR_15 & (1 << VAR_12);

   if (VAR_16) {
    if (VAR_14 & VAR_2)

     if (FUNC_4(VAR_12, VAR_10)
       == VAR_5)
      VAR_13 = VAR_5;
    if (VAR_14 & VAR_3)

     if (FUNC_2(VAR_12, VAR_10)
       == VAR_5)
      VAR_13 = VAR_5;
   } else {
    if (VAR_14 & VAR_1)

     if (FUNC_3(VAR_12, VAR_10)
       == VAR_5)
      VAR_13 = VAR_5;
   }
  }
  VAR_11 >>= 4;
  VAR_12++;
 }

 return VAR_13;
}
