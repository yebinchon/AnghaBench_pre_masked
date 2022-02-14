
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct max2175 {int freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct max2175*,int ) ;
 int FUNC_1 (struct max2175*,int ,int ) ;
 int FUNC_2 (struct max2175*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct max2175 *VAR_1, u64 VAR_2, u32 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_1, "tune_rf_freq: old %u new %llu\n", VAR_1->freq, VAR_2);
 VAR_1->freq = VAR_2;

 return VAR_4;
}
