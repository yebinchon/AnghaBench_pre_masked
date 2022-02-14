
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8,
  unsigned int VAR_9, unsigned int VAR_10)
{
 int VAR_11 = FUNC_1(&VAR_8->kobj,
  VAR_7[VAR_10]);
 if (VAR_9 & VAR_0)
  VAR_11 |= FUNC_1(&VAR_8->kobj,
   VAR_3[VAR_10]);
 if (VAR_9 & VAR_2)
  VAR_11 |= FUNC_1(&VAR_8->kobj,
   VAR_6[VAR_10]);
 if (VAR_9 & VAR_1) {
  VAR_11 |= FUNC_1(&VAR_8->kobj,
   VAR_5[VAR_10]);
  VAR_11 |= FUNC_1(&VAR_8->kobj,
   VAR_4[VAR_10]);
 }

 if (VAR_11)
  FUNC_0(VAR_8, "failed to register sysfs hooks for RDAC%d\n",
   VAR_10);

 return VAR_11;
}
