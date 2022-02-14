
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (int ,char*,int ,int,int,void const*,int,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_2, const void *VAR_3, size_t VAR_4)
{

 if (VAR_4 < 1024) {
  FUNC_1(VAR_1, VAR_2,
          VAR_0, 16, 1,
          VAR_3, VAR_4, 0);
  return;
 }

 FUNC_1(VAR_1, VAR_2,
         VAR_0, 16, 1,
         VAR_3, 512, 0);

 FUNC_0("%s truncated - continuing at offset %04zx\n",
  VAR_2, VAR_4 - 512);
 FUNC_1(VAR_1, VAR_2,
         VAR_0, 16, 1,
         VAR_3 + (VAR_4 - 512), 512, 0);
}
