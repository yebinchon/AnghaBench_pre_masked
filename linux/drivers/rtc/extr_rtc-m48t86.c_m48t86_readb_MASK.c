
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m48t86_rtc_info {int data_reg; int index_reg; } ;
struct device {int dummy; } ;


 struct m48t86_rtc_info* FUNC_0 (struct device*) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static unsigned char FUNC_3(struct device *VAR_0, unsigned long VAR_1)
{
 struct m48t86_rtc_info *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3;

 FUNC_2(VAR_1, VAR_2->index_reg);
 VAR_3 = FUNC_1(VAR_2->data_reg);

 return VAR_3;
}
