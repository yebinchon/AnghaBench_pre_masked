
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct tb_xdp_error_response {int error; int hdr; } ;
struct tb_ctl {int dummy; } ;
typedef int res ;
typedef enum tb_xdp_error { ____Placeholder_tb_xdp_error } tb_xdp_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_ctl*,struct tb_xdp_error_response*,int,int ) ;
 int FUNC_1 (struct tb_xdp_error_response*,int ,int) ;
 int FUNC_2 (int *,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct tb_ctl *VAR_2, u64 VAR_3, u8 VAR_4,
     enum tb_xdp_error VAR_5)
{
 struct tb_xdp_error_response VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_2(&VAR_6.hdr, VAR_3, VAR_4, VAR_0,
      sizeof(VAR_6));
 VAR_6.error = VAR_5;

 return FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6),
         VAR_1);
}
