
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps6507x_pmic {TYPE_1__* mfd; } ;
struct TYPE_2__ {int (* write_dev ) (TYPE_1__*,int ,int,int *) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct tps6507x_pmic *VAR_0, u8 VAR_1, u8 VAR_2)
{
 return VAR_0->mfd->write_dev(VAR_0->mfd, VAR_1, 1, &VAR_2);
}
