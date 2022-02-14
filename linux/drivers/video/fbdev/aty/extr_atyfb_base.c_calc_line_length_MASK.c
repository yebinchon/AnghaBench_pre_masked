
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atyfb_par {scalar_t__ ram_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_1(struct atyfb_par *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_4 * VAR_5 / 8;

 if (VAR_3->ram_type == VAR_0 ||
     (!FUNC_0(VAR_2) && VAR_3->ram_type == VAR_1))
  VAR_6 = (VAR_6 + 63) & ~63;

 return VAR_6;
}
