
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,unsigned char const) ;

__attribute__((used)) static void FUNC_2(const unsigned char *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 char VAR_4[16 * 3 + 1];

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 16) {
  for (VAR_3 = 0; (VAR_3 < 16) && (VAR_3 + VAR_2 < VAR_1); VAR_3++) {
   FUNC_1(VAR_4 + 3 * VAR_3, "%02x ", VAR_0[VAR_2 + VAR_3]);
  }
  VAR_4[3 * VAR_3] = '\0';
  FUNC_0("%s", VAR_4);
 }
}
