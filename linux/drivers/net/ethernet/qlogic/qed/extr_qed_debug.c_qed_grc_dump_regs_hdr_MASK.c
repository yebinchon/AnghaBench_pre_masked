
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef enum init_split_types { ____Placeholder_init_split_types } init_split_types ;
struct TYPE_2__ {char const* name; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,char*,int) ;
 int FUNC_1 (int*,int,char*,int) ;
 int FUNC_2 (int*,int,char const*,char const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_3(u32 *VAR_2,
     bool VAR_3,
     u32 VAR_4,
     enum init_split_types VAR_5,
     u8 VAR_6,
     const char *VAR_7, const char *VAR_8)
{
 u8 VAR_9 = 2 +
     (VAR_5 != VAR_0 ? 1 : 0) + (VAR_7 ? 1 : 0);
 u32 VAR_10 = 0;

 VAR_10 += FUNC_1(VAR_2 + VAR_10,
           VAR_3, "grc_regs", VAR_9);
 VAR_10 += FUNC_0(VAR_2 + VAR_10,
         VAR_3, "count", VAR_4);
 VAR_10 += FUNC_2(VAR_2 + VAR_10,
         VAR_3, "split",
         VAR_1[VAR_5].name);
 if (VAR_5 != VAR_0)
  VAR_10 += FUNC_0(VAR_2 + VAR_10,
          VAR_3, "id", VAR_6);
 if (VAR_7 && VAR_8)
  VAR_10 += FUNC_2(VAR_2 + VAR_10,
          VAR_3, VAR_7, VAR_8);

 return VAR_10;
}
