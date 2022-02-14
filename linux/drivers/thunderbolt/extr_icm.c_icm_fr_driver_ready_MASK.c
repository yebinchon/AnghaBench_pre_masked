
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct icm_pkg_driver_ready {TYPE_1__ hdr; } ;
struct icm_fr_pkg_driver_ready_response {int security_level; } ;
typedef int request ;
typedef int reply ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tb*,struct icm_pkg_driver_ready*,int,struct icm_fr_pkg_driver_ready_response*,int,int,int ) ;
 int FUNC_1 (struct icm_fr_pkg_driver_ready_response*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tb *VAR_3, enum tb_security_level *VAR_4,
      size_t *VAR_5, bool *VAR_6)
{
 struct icm_fr_pkg_driver_ready_response VAR_7;
 struct icm_pkg_driver_ready VAR_8 = {
  .hdr.code = VAR_0,
 };
 int VAR_9;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_9 = FUNC_0(VAR_3, &VAR_8, sizeof(VAR_8), &VAR_7, sizeof(VAR_7),
     1, VAR_2);
 if (VAR_9)
  return VAR_9;

 if (VAR_4)
  *VAR_4 = VAR_7.security_level & VAR_1;

 return 0;
}
