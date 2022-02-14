
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_hwinfo {char* data; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_cpp*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct nfp_cpp *VAR_1, struct nfp_hwinfo *VAR_2, u32 VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6 = VAR_2->data + VAR_3;

 for (VAR_4 = VAR_2->data; *VAR_4 && VAR_4 < VAR_6;
      VAR_4 = VAR_5 + FUNC_1(VAR_5) + 1) {

  VAR_5 = VAR_4 + FUNC_1(VAR_4) + 1;
  if (VAR_5 >= VAR_6) {
   FUNC_0(VAR_1, "Bad HWINFO - overflowing key\n");
   return -VAR_0;
  }

  if (VAR_5 + FUNC_1(VAR_5) + 1 > VAR_6) {
   FUNC_0(VAR_1, "Bad HWINFO - overflowing value\n");
   return -VAR_0;
  }
 }

 return 0;
}
