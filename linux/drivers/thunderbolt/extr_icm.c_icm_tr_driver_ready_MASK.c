
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct icm_tr_pkg_driver_ready_response {int info; TYPE_1__ hdr; } ;
struct TYPE_4__ {int code; } ;
struct icm_pkg_driver_ready {TYPE_2__ hdr; } ;
typedef int request ;
typedef int reply ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tb*,struct icm_pkg_driver_ready*,int,struct icm_tr_pkg_driver_ready_response*,int,int,int) ;
 int FUNC_1 (struct icm_tr_pkg_driver_ready_response*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tb *VAR_5, enum tb_security_level *VAR_6,
      size_t *VAR_7, bool *VAR_8)
{
 struct icm_tr_pkg_driver_ready_response VAR_9;
 struct icm_pkg_driver_ready VAR_10 = {
  .hdr.code = VAR_0,
 };
 int VAR_11;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_11 = FUNC_0(VAR_5, &VAR_10, sizeof(VAR_10), &VAR_9, sizeof(VAR_9),
     1, 20000);
 if (VAR_11)
  return VAR_11;

 if (VAR_6)
  *VAR_6 = VAR_9.info & VAR_4;
 if (VAR_7)
  *VAR_7 = (VAR_9.info & VAR_2) >>
    VAR_3;
 if (VAR_8)
  *VAR_8 = !!(VAR_9.hdr.flags & VAR_1);

 return 0;
}
