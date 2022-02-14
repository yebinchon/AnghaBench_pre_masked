
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);







 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3] < 0x20 || VAR_1[VAR_3] > 0x7E) {
   FUNC_0("Emulated T10 Inquiry Data contains non-ASCII-printable characters\n");
   return -VAR_0;
  }
 }

 return VAR_2;
}
