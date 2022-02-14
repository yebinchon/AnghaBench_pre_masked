
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {int dummy; } ;
struct icm_tr_pkg_driver_ready_response {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct icm_pkg_driver_ready {TYPE_1__ hdr; } ;
typedef int request ;
typedef int reply ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 int FUNC_0 (struct tb*,struct icm_pkg_driver_ready*,int,struct icm_tr_pkg_driver_ready_response*,int,int,int) ;
 int FUNC_1 (struct icm_tr_pkg_driver_ready_response*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tb *VAR_1, enum tb_security_level *VAR_2,
      size_t *VAR_3, bool *VAR_4)
{
 struct icm_tr_pkg_driver_ready_response VAR_5;
 struct icm_pkg_driver_ready VAR_6 = {
  .hdr.code = VAR_0,
 };
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = FUNC_0(VAR_1, &VAR_6, sizeof(VAR_6), &VAR_5, sizeof(VAR_5),
     1, 20000);
 if (VAR_7)
  return VAR_7;


 if (VAR_4)
  *VAR_4 = 1;

 return 0;
}
