
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u64 ;
typedef unsigned long long u32 ;
struct da9150_fg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long FUNC_0 (struct da9150_fg*,int ,int ) ;
 int FUNC_1 (struct da9150_fg*) ;
 int FUNC_2 (struct da9150_fg*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct da9150_fg *VAR_6,
     union power_supply_propval *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u64 VAR_11, VAR_12;

 FUNC_2(VAR_6);
 VAR_8 = FUNC_0(VAR_6, VAR_0,
       VAR_1);
 VAR_10 = FUNC_0(VAR_6, VAR_4,
     VAR_5);
 VAR_9 = FUNC_0(VAR_6, VAR_2,
          VAR_3);
 FUNC_1(VAR_6);

 VAR_11 = (u64) (VAR_9 * VAR_10 * 65536ULL);
 FUNC_3(VAR_11, 1000000);
 VAR_12 = (u64) (VAR_8 * 1000000ULL);
 FUNC_3(VAR_12, VAR_11);

 VAR_7->intval = (int) VAR_12;

 return 0;
}
