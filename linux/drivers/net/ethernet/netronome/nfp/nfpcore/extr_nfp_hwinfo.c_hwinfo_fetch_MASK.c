
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_hwinfo {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct nfp_hwinfo* FUNC_0 (struct nfp_cpp*,size_t*) ;
 unsigned long VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfp_cpp*,char*) ;
 scalar_t__ FUNC_3 (unsigned long const,unsigned long const) ;

__attribute__((used)) static struct nfp_hwinfo *FUNC_4(struct nfp_cpp *VAR_3, size_t *VAR_4)
{
 const unsigned long VAR_5 = VAR_2 + VAR_0 * VAR_1;
 struct nfp_hwinfo *VAR_6;
 int VAR_7;

 for (;;) {
  const unsigned long VAR_8 = VAR_2;

  VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (VAR_6)
   return VAR_6;

  VAR_7 = FUNC_1(100);
  if (VAR_7 || FUNC_3(VAR_8, VAR_5)) {
   FUNC_2(VAR_3, "NFP access error\n");
   return ((void*)0);
  }
 }
}
