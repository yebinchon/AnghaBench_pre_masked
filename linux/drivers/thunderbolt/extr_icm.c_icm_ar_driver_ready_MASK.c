
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb {int dummy; } ;
struct TYPE_4__ {int code; } ;
struct icm_pkg_driver_ready {TYPE_2__ hdr; } ;
struct TYPE_3__ {int flags; } ;
struct icm_ar_pkg_driver_ready_response {int info; TYPE_1__ hdr; } ;
typedef int request ;
typedef int reply ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tb*,struct icm_pkg_driver_ready*,int,struct icm_ar_pkg_driver_ready_response*,int,int,int ) ;
 int FUNC_1 (struct icm_ar_pkg_driver_ready_response*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tb *VAR_7, enum tb_security_level *VAR_8,
      size_t *VAR_9, bool *VAR_10)
{
 struct icm_ar_pkg_driver_ready_response VAR_11;
 struct icm_pkg_driver_ready VAR_12 = {
  .hdr.code = VAR_5,
 };
 int VAR_13;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_13 = FUNC_0(VAR_7, &VAR_12, sizeof(VAR_12), &VAR_11, sizeof(VAR_11),
     1, VAR_6);
 if (VAR_13)
  return VAR_13;

 if (VAR_8)
  *VAR_8 = VAR_11.info & VAR_4;
 if (VAR_9 && (VAR_11.info & VAR_3))
  *VAR_9 = (VAR_11.info & VAR_1) >>
    VAR_2;
 if (VAR_10)
  *VAR_10 = !!(VAR_11.hdr.flags & VAR_0);

 return 0;
}
