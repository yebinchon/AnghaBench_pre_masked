
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static inline int FUNC_6(struct device *VAR_2,
            int VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_4(VAR_3)) {
  FUNC_3(VAR_2, "unable to set IRQ affinity\n");
  return -VAR_0;
 }

 if (VAR_4 == -1 || !FUNC_0(VAR_4))
  VAR_4 = FUNC_1(VAR_1);

 VAR_5 = FUNC_5(VAR_3, FUNC_2(VAR_4));
 if (VAR_5)
  FUNC_3(VAR_2, "irq_set_affinity() on CPU %d failed\n", VAR_4);

 return VAR_5;
}
