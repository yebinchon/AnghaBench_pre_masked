
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int u8 ;
typedef int u64 ;
struct tb_xdp_uuid_response {int src_route_lo; int src_route_hi; int src_uuid; int hdr; } ;
struct tb_ctl {int dummy; } ;
typedef int res ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_ctl*,struct tb_xdp_uuid_response*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tb_xdp_uuid_response*,int ,int) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int const*) ;

__attribute__((used)) static int FUNC_6(struct tb_ctl *VAR_2, u64 VAR_3, u8 VAR_4,
    const uuid_t *VAR_5)
{
 struct tb_xdp_uuid_response VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(&VAR_6.hdr, VAR_3, VAR_4, VAR_1,
      sizeof(VAR_6));

 FUNC_5(&VAR_6.src_uuid, VAR_5);
 VAR_6.src_route_hi = FUNC_4(VAR_3);
 VAR_6.src_route_lo = FUNC_1(VAR_3);

 return FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6),
         VAR_0);
}
