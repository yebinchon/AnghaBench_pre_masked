
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_upr {scalar_t__ type; int paddr; } ;
struct slic_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct slic_device*) ;
 int FUNC_2 (struct slic_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct slic_device *VAR_3, struct slic_upr *VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_4->type == VAR_2) ? VAR_1 :
            VAR_0;
 FUNC_2(VAR_3, VAR_5, FUNC_0(VAR_4->paddr));
 FUNC_1(VAR_3);
}
