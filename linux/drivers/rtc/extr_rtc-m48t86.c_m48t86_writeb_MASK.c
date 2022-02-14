
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m48t86_rtc_info {int data_reg; int index_reg; } ;
struct device {int dummy; } ;


 struct m48t86_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0,
     unsigned char VAR_1, unsigned long VAR_2)
{
 struct m48t86_rtc_info *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3->index_reg);
 FUNC_1(VAR_1, VAR_3->data_reg);
}
