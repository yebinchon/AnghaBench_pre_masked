
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmpd_req {int value; int nbytes; int key; } ;
struct rpmpd {int res_id; int res_type; int rpm; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,struct rpmpd_req*,int) ;

__attribute__((used)) static int FUNC_2(struct rpmpd *VAR_2, bool VAR_3)
{
 struct rpmpd_req VAR_4 = {
  .key = VAR_0,
  .nbytes = FUNC_0(sizeof(u32)),
  .value = FUNC_0(VAR_3),
 };

 return FUNC_1(VAR_2->rpm, VAR_1,
      VAR_2->res_type, VAR_2->res_id, &VAR_4, sizeof(VAR_4));
}
