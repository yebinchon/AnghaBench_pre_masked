
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mtk_vpu {TYPE_1__* extmem; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int pa; int va; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_vpu *VAR_2, u8 VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 size_t VAR_5 = VAR_3 ? VAR_0 : VAR_1;

 FUNC_0(VAR_4, VAR_5, VAR_2->extmem[VAR_3].va,
     VAR_2->extmem[VAR_3].pa);
}
