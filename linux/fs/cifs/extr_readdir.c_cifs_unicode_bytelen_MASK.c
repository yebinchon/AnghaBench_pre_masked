
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2)
{
 int VAR_3;
 const __le16 *VAR_4 = (const __le16 *)VAR_2;

 for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++) {
  if (VAR_4[VAR_3] == 0)
   return VAR_3 << 1;
 }
 FUNC_0(VAR_0, "Unicode string longer than PATH_MAX found\n");
 return VAR_3 << 1;
}
