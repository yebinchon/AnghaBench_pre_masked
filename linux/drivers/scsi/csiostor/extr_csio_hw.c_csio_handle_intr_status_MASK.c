
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int mask; scalar_t__ msg; scalar_t__ fatal; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_hw*,char*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct csio_hw*,char*,scalar_t__,unsigned int) ;
 unsigned int FUNC_2 (struct csio_hw*,unsigned int) ;
 int FUNC_3 (struct csio_hw*,unsigned int,unsigned int) ;

int
FUNC_4(struct csio_hw *VAR_0, unsigned int VAR_1,
     const struct intr_info *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = FUNC_2(VAR_0, VAR_1);

 for ( ; VAR_2->mask; ++VAR_2) {
  if (!(VAR_5 & VAR_2->mask))
   continue;
  if (VAR_2->fatal) {
   VAR_3++;
   FUNC_0(VAR_0, "Fatal %s (0x%x)\n",
        VAR_2->msg, VAR_5 & VAR_2->mask);
  } else if (VAR_2->msg)
   FUNC_1(VAR_0, "%s (0x%x)\n",
        VAR_2->msg, VAR_5 & VAR_2->mask);
  VAR_4 |= VAR_2->mask;
 }
 VAR_5 &= VAR_4;
 if (VAR_5)
  FUNC_3(VAR_0, VAR_5, VAR_1);
 return VAR_3;
}
