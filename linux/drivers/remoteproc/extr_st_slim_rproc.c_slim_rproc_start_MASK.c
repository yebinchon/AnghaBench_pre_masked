
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct st_slim_rproc {TYPE_1__* mem; scalar_t__ slimcore; scalar_t__ peri; } ;
struct device {int dummy; } ;
struct rproc {struct st_slim_rproc* priv; struct device dev; } ;
struct TYPE_2__ {scalar_t__ cpu_addr; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int FUNC_2 (struct device*,char*,int ,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (scalar_t__) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct rproc *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct st_slim_rproc *VAR_17 = VAR_15->priv;
 unsigned long VAR_18, VAR_19, VAR_20;
 u32 VAR_21;


 VAR_21 = VAR_0 | VAR_2;
 FUNC_5(VAR_21, VAR_17->slimcore + VAR_1);


 FUNC_5(VAR_11, VAR_17->peri + VAR_12);


 FUNC_5(!VAR_0,
  VAR_17->slimcore + VAR_1);


 FUNC_5(~0U, VAR_17->peri + VAR_8);
 FUNC_5(~0U, VAR_17->peri + VAR_3);


 FUNC_5(~0U, VAR_17->peri + VAR_9);
 FUNC_5(~0U, VAR_17->peri + VAR_4);


 FUNC_5(VAR_6, VAR_17->slimcore + VAR_5);

 VAR_18 = FUNC_4(VAR_17->slimcore + VAR_7);
 VAR_19 = FUNC_4(VAR_17->slimcore + VAR_13);

 VAR_20 = FUNC_3(VAR_17->mem[VAR_14].cpu_addr +
   VAR_10);

 FUNC_2(VAR_16, "fw rev:%ld.%ld on SLIM %ld.%ld\n",
   FUNC_0(VAR_20), FUNC_1(VAR_20),
   VAR_18, VAR_19);

 return 0;
}
