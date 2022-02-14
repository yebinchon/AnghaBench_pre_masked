
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nfp_resource_entry {int dummy; } ;
struct nfp_cpp_mutex {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfp_cpp_mutex* FUNC_0 (struct nfp_cpp*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct nfp_cpp_mutex*) ;
 scalar_t__ FUNC_2 (struct nfp_cpp_mutex*) ;
 int FUNC_3 (struct nfp_cpp*,int ,scalar_t__) ;
 int FUNC_4 (struct nfp_cpp_mutex*) ;
 int FUNC_5 (struct nfp_cpp*,char*,...) ;
 int FUNC_6 (struct nfp_cpp*,char*,...) ;

int FUNC_7(struct nfp_cpp *VAR_6)
{
 struct nfp_cpp_mutex *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_5,
        VAR_2);
 if (VAR_9 < 0) {
  FUNC_5(VAR_6, "Error: failed to reclaim resource table mutex\n");
  return VAR_9;
 }
 if (VAR_9)
  FUNC_6(VAR_6, "Warning: busted main resource table mutex\n");

 VAR_7 = FUNC_0(VAR_6, VAR_5,
     VAR_2,
     VAR_4);
 if (!VAR_7)
  return -VAR_1;

 if (FUNC_2(VAR_7)) {
  FUNC_5(VAR_6, "Error: failed to claim resource table mutex\n");
  FUNC_1(VAR_7);
  return -VAR_0;
 }


 for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8++) {
  u64 VAR_10 = VAR_2 +
   sizeof(struct nfp_resource_entry) * VAR_8;

  VAR_9 = FUNC_3(VAR_6, VAR_5, VAR_10);
  if (VAR_9 < 0) {
   FUNC_5(VAR_6,
    "Error: failed to reclaim resource %d mutex\n",
    VAR_8);
   goto err_unlock;
  }
  if (VAR_9)
   FUNC_6(VAR_6, "Warning: busted resource %d mutex\n", VAR_8);
 }

 VAR_9 = 0;
err_unlock:
 FUNC_4(VAR_7);
 FUNC_1(VAR_7);

 return VAR_9;
}
