
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_cpp_mutex {int depth; scalar_t__ key; scalar_t__ address; struct nfp_cpp* cpp; int target; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 int FUNC_1 (struct nfp_cpp*) ;
 int FUNC_2 (struct nfp_cpp*,scalar_t__ const,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct nfp_cpp*,scalar_t__ const,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct nfp_cpp_mutex *VAR_5)
{
 const u32 VAR_6 = FUNC_0(VAR_5->target, 4, 0);
 const u32 VAR_7 = FUNC_0(VAR_5->target, 5, 3);
 const u32 VAR_8 = FUNC_0(VAR_5->target, 3, 0);
 struct nfp_cpp *VAR_9 = VAR_5->cpp;
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (VAR_5->depth > 0) {
  if (VAR_5->depth == VAR_4)
   return -VAR_0;
  VAR_5->depth++;
  return 0;
 }


 VAR_13 = FUNC_2(VAR_9, VAR_8, VAR_5->address + 4, &VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_10 != VAR_5->key)
  return -VAR_3;





 VAR_11 = FUNC_6(FUNC_1(VAR_9));
 VAR_13 = FUNC_2(VAR_9, VAR_7, VAR_5->address, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;


 if (FUNC_5(VAR_12)) {
  VAR_13 = FUNC_3(VAR_9, VAR_6, VAR_5->address, VAR_11);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_5->depth = 1;
  return 0;
 }

 return FUNC_4(VAR_12) ? -VAR_1 : -VAR_2;
}
