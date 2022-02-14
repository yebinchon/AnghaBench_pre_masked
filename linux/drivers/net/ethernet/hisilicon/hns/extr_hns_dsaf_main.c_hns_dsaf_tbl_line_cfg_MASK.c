
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_tbl_line_cfg {int tbl_line_out_port; int tbl_line_dvc; int tbl_line_mac_discard; } ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dsaf_device*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct dsaf_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dsaf_device *VAR_5,
      struct dsaf_tbl_line_cfg *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 FUNC_1(VAR_7, VAR_1,
       VAR_6->tbl_line_mac_discard);
 FUNC_1(VAR_7, VAR_0,
       VAR_6->tbl_line_dvc);
 FUNC_2(VAR_7, VAR_2,
         VAR_3,
         VAR_6->tbl_line_out_port);
 FUNC_3(VAR_5, VAR_4, VAR_7);
}
