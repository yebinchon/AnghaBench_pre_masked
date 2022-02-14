
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvs_info {TYPE_1__* pdev; } ;
struct ffe_control {int ffe_rss_sel; int ffe_cap_sel; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int,int ) ;
 int FUNC_2 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_5, int VAR_6,
          struct ffe_control VAR_7)
{
 u32 VAR_8;


 if ((VAR_5->pdev->revision == VAR_0)
  || (VAR_5->pdev->revision == VAR_1))
  return;
 FUNC_1(VAR_5, VAR_6, VAR_3);
 VAR_8 = FUNC_0(VAR_5, VAR_6);
 VAR_8 &= ~0xFF;


 VAR_8 |= ((0x1 << 7) |
  (VAR_7.ffe_rss_sel << 4) |
  (VAR_7.ffe_cap_sel << 0));

 FUNC_2(VAR_5, VAR_6, VAR_8);





 FUNC_1(VAR_5, VAR_6, VAR_4);
 VAR_8 = FUNC_0(VAR_5, VAR_6);
 VAR_8 &= ~0x40001;


 VAR_8 |= (0 << 18);
 FUNC_2(VAR_5, VAR_6, VAR_8);






 FUNC_1(VAR_5, VAR_6, VAR_2);
 VAR_8 = FUNC_0(VAR_5, VAR_6);
 VAR_8 &= ~0xFFF;


 VAR_8 |= ((0x3F << 6) | (0x0 << 0));
 FUNC_2(VAR_5, VAR_6, VAR_8);





 FUNC_1(VAR_5, VAR_6, VAR_4);
 VAR_8 = FUNC_0(VAR_5, VAR_6);
 VAR_8 &= ~0x8;


 VAR_8 |= (0 << 3);
 FUNC_2(VAR_5, VAR_6, VAR_8);
}
