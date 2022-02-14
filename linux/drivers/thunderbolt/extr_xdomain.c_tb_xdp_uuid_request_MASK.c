
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int u64 ;
struct tb_xdp_uuid_response {int src_uuid; int hdr; } ;
struct tb_xdp_uuid {int src_uuid; int hdr; } ;
struct tb_ctl {int dummy; } ;
typedef int res ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb_ctl*,struct tb_xdp_uuid_response*,int,int ,struct tb_xdp_uuid_response*,int,int ,int ) ;
 int FUNC_1 (struct tb_xdp_uuid_response*,int ,int) ;
 int FUNC_2 (int *,int ,int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct tb_ctl *VAR_4, u64 VAR_5, int VAR_6,
          uuid_t *VAR_7)
{
 struct tb_xdp_uuid_response VAR_8;
 struct tb_xdp_uuid VAR_9;
 int VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(&VAR_9.hdr, VAR_5, VAR_6 % 4, VAR_2,
      sizeof(VAR_9));

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_10 = FUNC_0(VAR_4, &VAR_9, sizeof(VAR_9),
       VAR_0, &VAR_8, sizeof(VAR_8),
       VAR_1,
       VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(&VAR_8.hdr);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_7, &VAR_8.src_uuid);
 return 0;
}
