
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lp8788_irq_data {int domain; struct lp8788* lp; } ;
struct lp8788 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct lp8788*,int ,size_t*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct lp8788_irq_data *VAR_7 = VAR_6;
 struct lp8788 *VAR_8 = VAR_7->lp;
 u8 VAR_9[VAR_4], VAR_10, VAR_11;
 bool VAR_12 = 0;
 int VAR_13;

 if (FUNC_4(VAR_8, VAR_2, VAR_9, VAR_4))
  return VAR_1;

 for (VAR_13 = 0 ; VAR_13 < VAR_3 ; VAR_13++) {
  VAR_10 = FUNC_0(VAR_13);
  VAR_11 = FUNC_1(VAR_13);


  if (VAR_9[VAR_10] & VAR_11) {
   FUNC_2(FUNC_3(VAR_7->domain, VAR_13));
   VAR_12 = 1;
  }
 }

 return VAR_12 ? VAR_0 : VAR_1;
}
