
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct aemif_device {unsigned long clk_rate; int cs_offset; int base; struct aemif_cs_data* cs_data; } ;
struct aemif_cs_data {int cs; int asize; int enable_ss; int enable_ew; void* wsetup; void* wstrobe; void* whold; void* rsetup; void* rstrobe; void* rhold; void* ta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int ,unsigned long) ;
 struct aemif_device* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct platform_device *VAR_2, int VAR_3)
{
 struct aemif_device *VAR_4 = FUNC_10(VAR_2);
 struct aemif_cs_data *VAR_5 = &VAR_4->cs_data[VAR_3];
 unsigned long VAR_6 = VAR_4->clk_rate;
 u32 VAR_7, VAR_8;

 VAR_8 = VAR_0 + (VAR_5->cs - VAR_4->cs_offset) * 4;
 VAR_7 = FUNC_11(VAR_4->base + VAR_8);

 VAR_5->ta = FUNC_9(FUNC_5(VAR_7), VAR_6);
 VAR_5->rhold = FUNC_9(FUNC_1(VAR_7), VAR_6);
 VAR_5->rstrobe = FUNC_9(FUNC_3(VAR_7), VAR_6);
 VAR_5->rsetup = FUNC_9(FUNC_2(VAR_7), VAR_6);
 VAR_5->whold = FUNC_9(FUNC_6(VAR_7), VAR_6);
 VAR_5->wstrobe = FUNC_9(FUNC_8(VAR_7), VAR_6);
 VAR_5->wsetup = FUNC_9(FUNC_7(VAR_7), VAR_6);
 VAR_5->enable_ew = FUNC_0(VAR_7);
 VAR_5->enable_ss = FUNC_4(VAR_7);
 VAR_5->asize = VAR_7 & VAR_1;
}
