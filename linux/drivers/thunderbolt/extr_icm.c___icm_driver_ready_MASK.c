
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_cfg_result {int err; } ;
struct tb {int ctl; } ;
struct icm {int (* driver_ready ) (struct tb*,int*,size_t*,int*) ;} ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tb*,int*,size_t*,int*) ;
 struct tb_cfg_result FUNC_2 (int ,int *,int ,int ,int ,int ,int,int) ;
 int FUNC_3 (struct tb*,char*) ;
 struct icm* FUNC_4 (struct tb*) ;

__attribute__((used)) static int
FUNC_5(struct tb *VAR_2, enum tb_security_level *VAR_3,
     size_t *VAR_4, bool *VAR_5)
{
 struct icm *VAR_6 = FUNC_4(VAR_2);
 unsigned int VAR_7 = 50;
 int VAR_8;

 VAR_8 = VAR_6->driver_ready(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_2, "failed to send driver ready to ICM\n");
  return VAR_8;
 }





 do {
  struct tb_cfg_result VAR_9;
  u32 VAR_10;

  VAR_9 = FUNC_2(VAR_2->ctl, &VAR_10, 0, 0, VAR_1,
          0, 1, 100);
  if (!VAR_9.err)
   return 0;

  FUNC_0(50);
 } while (--VAR_7);

 FUNC_3(VAR_2, "failed to read root switch config space, giving up\n");
 return -VAR_0;
}
