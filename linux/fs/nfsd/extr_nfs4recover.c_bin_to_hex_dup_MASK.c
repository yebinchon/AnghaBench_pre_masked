
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static char *
FUNC_2(const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 char *VAR_4, *VAR_5;


 VAR_4 = FUNC_0((VAR_2 * 2) + 1, VAR_0);
 if (!VAR_4)
  return VAR_4;

 VAR_5 = VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_5, "%2.2x", *VAR_1++);
  VAR_5 += 2;
 }
 return VAR_4;
}
