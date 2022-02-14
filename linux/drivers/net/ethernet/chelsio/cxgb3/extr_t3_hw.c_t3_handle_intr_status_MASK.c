
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int mask; size_t stat_idx; scalar_t__ msg; scalar_t__ fatal; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,char*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct adapter*,char*,scalar_t__,unsigned int) ;
 unsigned int FUNC_2 (struct adapter*,unsigned int) ;
 int FUNC_3 (struct adapter*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2,
     const struct intr_info *VAR_3,
     unsigned long *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6 = FUNC_2(VAR_0, VAR_1) & VAR_2;

 for (; VAR_3->mask; ++VAR_3) {
  if (!(VAR_6 & VAR_3->mask))
   continue;
  if (VAR_3->fatal) {
   VAR_5++;
   FUNC_0(VAR_0, "%s (0x%x)\n",
     VAR_3->msg, VAR_6 & VAR_3->mask);
   VAR_6 &= ~VAR_3->mask;
  } else if (VAR_3->msg)
   FUNC_1(VAR_0, "%s (0x%x)\n",
    VAR_3->msg, VAR_6 & VAR_3->mask);
  if (VAR_3->stat_idx >= 0)
   VAR_4[VAR_3->stat_idx]++;
 }
 if (VAR_6)
  FUNC_3(VAR_0, VAR_1, VAR_6);
 return VAR_5;
}
