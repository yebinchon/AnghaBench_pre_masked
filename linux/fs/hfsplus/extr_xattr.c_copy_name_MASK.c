
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4;
 int VAR_6 = 0;

 if (!FUNC_0(VAR_3)) {
  FUNC_1(VAR_2, VAR_0, VAR_1);
  VAR_6 += VAR_1;
  VAR_5 += VAR_1;
 }

 FUNC_3(VAR_2 + VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_2 + VAR_6 + VAR_4, 0, 1);
 VAR_5 += 1;

 return VAR_5;
}
