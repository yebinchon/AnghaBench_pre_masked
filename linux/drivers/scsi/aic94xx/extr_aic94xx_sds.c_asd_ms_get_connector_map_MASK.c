
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ms_conn_map {scalar_t__ maj; } ;
struct asd_manuf_sec {int dummy; } ;
struct asd_ha_struct {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct asd_ms_conn_map* FUNC_1 (struct asd_manuf_sec*,char,char) ;

__attribute__((used)) static int FUNC_2(struct asd_ha_struct *VAR_1,
        struct asd_manuf_sec *VAR_2)
{
 struct asd_ms_conn_map *VAR_3;

 VAR_3 = FUNC_1(VAR_2, 'M', 'C');
 if (!VAR_3) {
  FUNC_0("ms: no connector map found\n");
  return 0;
 }

 if (VAR_3->maj != 0) {
  FUNC_0("ms: unsupported: connector map major version 0x%x"
       "\n", VAR_3->maj);
  return -VAR_0;
 }



 return 0;
}
