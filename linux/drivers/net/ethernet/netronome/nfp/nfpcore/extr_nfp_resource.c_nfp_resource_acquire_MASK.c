
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_resource {int name; } ;
struct nfp_cpp_mutex {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfp_resource* FUNC_0 (int) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_1 (struct nfp_resource*) ;
 struct nfp_resource* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 struct nfp_cpp_mutex* FUNC_4 (struct nfp_cpp*,int ,int ,int ) ;
 int FUNC_5 (struct nfp_cpp_mutex*) ;
 int FUNC_6 (struct nfp_cpp*,char*,char const*) ;
 int FUNC_7 (struct nfp_cpp*,struct nfp_resource*,struct nfp_cpp_mutex*) ;
 int FUNC_8 (struct nfp_cpp*,char*,char const*) ;
 int FUNC_9 (int ,char const*,int ) ;
 scalar_t__ FUNC_10 (unsigned long) ;

struct nfp_resource *
FUNC_11(struct nfp_cpp *VAR_13, const char *VAR_14)
{
 unsigned long VAR_15 = VAR_12 + VAR_6 * VAR_4;
 unsigned long VAR_16 = VAR_12 + VAR_5 * VAR_4;
 struct nfp_cpp_mutex *VAR_17;
 struct nfp_resource *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return FUNC_0(-VAR_1);

 FUNC_9(VAR_18->name, VAR_14, VAR_8);

 VAR_17 = FUNC_4(VAR_13, VAR_11,
     VAR_9,
     VAR_10);
 if (!VAR_17) {
  FUNC_1(VAR_18);
  return FUNC_0(-VAR_1);
 }

 for (;;) {
  VAR_19 = FUNC_7(VAR_13, VAR_18, VAR_17);
  if (!VAR_19)
   break;
  if (VAR_19 != -VAR_0)
   goto err_free;

  VAR_19 = FUNC_3(1);
  if (VAR_19 != 0) {
   VAR_19 = -VAR_2;
   goto err_free;
  }

  if (FUNC_10(VAR_15)) {
   VAR_15 = VAR_12 + VAR_7 * VAR_4;
   FUNC_8(VAR_13, "Warning: waiting for NFP resource %s\n",
     VAR_14);
  }
  if (FUNC_10(VAR_16)) {
   FUNC_6(VAR_13, "Error: resource %s timed out\n", VAR_14);
   VAR_19 = -VAR_0;
   goto err_free;
  }
 }

 FUNC_5(VAR_17);

 return VAR_18;

err_free:
 FUNC_5(VAR_17);
 FUNC_1(VAR_18);
 return FUNC_0(VAR_19);
}
