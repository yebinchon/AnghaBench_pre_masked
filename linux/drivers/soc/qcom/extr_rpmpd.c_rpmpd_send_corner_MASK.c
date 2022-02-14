
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmpd_req {int value; int nbytes; int key; } ;
struct rpmpd {int res_id; int res_type; int rpm; int key; } ;
typedef int req ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,int ,int ,struct rpmpd_req*,int) ;

__attribute__((used)) static int FUNC_2(struct rpmpd *VAR_0, int VAR_1, unsigned int VAR_2)
{
 struct rpmpd_req VAR_3 = {
  .key = VAR_0->key,
  .nbytes = FUNC_0(sizeof(u32)),
  .value = FUNC_0(VAR_2),
 };

 return FUNC_1(VAR_0->rpm, VAR_1, VAR_0->res_type, VAR_0->res_id,
      &VAR_3, sizeof(VAR_3));
}
