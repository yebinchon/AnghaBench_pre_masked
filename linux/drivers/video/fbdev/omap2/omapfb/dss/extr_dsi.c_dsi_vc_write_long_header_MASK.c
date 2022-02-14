
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {int vc_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct platform_device*) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ,int) ;

__attribute__((used)) static inline void FUNC_6(struct platform_device *VAR_0,
  int VAR_1, u8 VAR_2, u16 VAR_3, u8 VAR_4)
{
 struct dsi_data *VAR_5 = FUNC_4(VAR_0);
 u32 VAR_6;
 u8 VAR_7;

 FUNC_2(!FUNC_3(VAR_0));

 VAR_7 = VAR_2 | VAR_5->vc[VAR_1].vc_id << 6;

 VAR_6 = FUNC_1(VAR_7, 7, 0) | FUNC_1(VAR_3, 23, 8) |
  FUNC_1(VAR_4, 31, 24);

 FUNC_5(VAR_0, FUNC_0(VAR_1), VAR_6);
}
