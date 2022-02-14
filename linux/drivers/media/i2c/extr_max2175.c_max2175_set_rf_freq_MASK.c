
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct max2175 {int dummy; } ;


 scalar_t__ FUNC_0 (struct max2175*) ;
 int FUNC_1 (struct max2175*,int ) ;
 int FUNC_2 (struct max2175*,int ,int ) ;
 int FUNC_3 (struct max2175*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct max2175 *VAR_0, u64 VAR_1, u32 VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_0))
  VAR_3 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_3(VAR_0, "set_rf_freq: ret %d freq %llu\n", VAR_3, VAR_1);

 return VAR_3;
}
