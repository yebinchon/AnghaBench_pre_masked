
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (char*,char*,size_t) ;

int FUNC_5(void *VAR_2, unsigned long VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_4((char *)VAR_2, (char *)VAR_3, VAR_4);
 if (VAR_5) {
  if (!FUNC_0(VAR_1)) {
   FUNC_3("kdb_getarea: Bad address 0x%lx\n", VAR_3);
   FUNC_2(VAR_1);
  }
  VAR_5 = VAR_0;
 } else {
  FUNC_1(VAR_1);
 }
 return VAR_5;
}
