
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char*,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*,int) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_0)
{
 char VAR_1[64 + 20 + 20], *VAR_2 = VAR_1;
 char *VAR_3[3];
 char *VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_8(VAR_0, sizeof(VAR_1)) >= sizeof(VAR_1))
  FUNC_2("parameter too long\n");

 FUNC_7(VAR_2, VAR_0);
 FUNC_1(VAR_2);

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
  VAR_3[VAR_7] = FUNC_9(&VAR_2, ",");

 if (VAR_2)
  FUNC_2("too many arguments\n");

 if (!VAR_3[2])
  FUNC_2("not enough arguments\n");

 VAR_8 = FUNC_3(&VAR_4, VAR_3[0]);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(&VAR_5, VAR_3[1]);
 if (VAR_8) {
  FUNC_0(VAR_4);
  FUNC_2("illegal start address\n");
 }

 VAR_8 = FUNC_4(&VAR_6, VAR_3[2]);
 if (VAR_8) {
  FUNC_0(VAR_4);
  FUNC_2("illegal device length\n");
 }

 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (!VAR_8)
  FUNC_5("%s device: %#llx at %#llx\n", VAR_4, VAR_6, VAR_5);
 else
  FUNC_0(VAR_4);

 return VAR_8;
}
