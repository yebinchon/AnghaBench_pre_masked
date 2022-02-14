
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dim_channel {int dummy; } ;
struct dim2_hdm {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {unsigned long data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dim2_hdm*,struct dim_channel**) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct dim2_hdm *VAR_6 = VAR_5;
 struct dim_channel *VAR_7[VAR_0 + 1];
 unsigned long VAR_8;

 FUNC_2(&VAR_3, VAR_8);
 FUNC_0(FUNC_1(VAR_6, VAR_7));
 FUNC_3(&VAR_3, VAR_8);

 VAR_2.data = (unsigned long)VAR_6;
 FUNC_4(&VAR_2);
 return VAR_1;
}
