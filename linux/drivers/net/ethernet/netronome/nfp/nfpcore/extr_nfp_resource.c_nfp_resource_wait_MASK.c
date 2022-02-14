
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_resource {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct nfp_resource*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct nfp_resource*) ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nfp_cpp*,char*,char const*,...) ;
 int FUNC_4 (struct nfp_cpp*,char*,char const*) ;
 struct nfp_resource* FUNC_5 (struct nfp_cpp*,char const*) ;
 int FUNC_6 (struct nfp_resource*) ;
 scalar_t__ FUNC_7 (unsigned long) ;

int FUNC_8(struct nfp_cpp *VAR_7, const char *VAR_8, unsigned int VAR_9)
{
 unsigned long VAR_10 = VAR_6 + VAR_4 * VAR_3;
 unsigned long VAR_11 = VAR_6 + VAR_9 * VAR_3;
 struct nfp_resource *VAR_12;

 while (1) {
  VAR_12 = FUNC_5(VAR_7, VAR_8);
  if (!FUNC_0(VAR_12)) {
   FUNC_6(VAR_12);
   return 0;
  }

  if (FUNC_1(VAR_12) != -VAR_0) {
   FUNC_3(VAR_7, "error waiting for resource %s: %ld\n",
    VAR_8, FUNC_1(VAR_12));
   return FUNC_1(VAR_12);
  }
  if (FUNC_7(VAR_11)) {
   FUNC_3(VAR_7, "timeout waiting for resource %s\n", VAR_8);
   return -VAR_2;
  }
  if (FUNC_7(VAR_10)) {
   VAR_10 = VAR_6 + VAR_5 * VAR_3;
   FUNC_4(VAR_7, "waiting for NFP resource %s\n", VAR_8);
  }
  if (FUNC_2(10)) {
   FUNC_3(VAR_7, "wait for resource %s interrupted\n",
    VAR_8);
   return -VAR_1;
  }
 }
}
