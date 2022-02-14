
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
typedef int uint32_t ;
typedef int uint16_t ;
struct fscache_netfs {int version; int name; } ;
typedef int loff_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,void const*,int) ;

__attribute__((used)) static enum fscache_checkaux FUNC_3(
 void *VAR_2,
 const void *VAR_3,
 uint16_t VAR_4,
 loff_t VAR_5)
{
 struct fscache_netfs *VAR_6 = VAR_2;
 uint32_t VAR_7;

 FUNC_0("{%s},,%hu", VAR_6->name, VAR_4);

 if (VAR_4 != sizeof(VAR_7)) {
  FUNC_1(" = OBSOLETE [dl=%d v=%zu]", VAR_4, sizeof(VAR_7));
  return VAR_0;
 }

 FUNC_2(&VAR_7, VAR_3, sizeof(VAR_7));
 if (VAR_7 != VAR_6->version) {
  FUNC_1(" = OBSOLETE [ver=%x net=%x]", VAR_7, VAR_6->version);
  return VAR_0;
 }

 FUNC_1(" = OKAY");
 return VAR_1;
}
