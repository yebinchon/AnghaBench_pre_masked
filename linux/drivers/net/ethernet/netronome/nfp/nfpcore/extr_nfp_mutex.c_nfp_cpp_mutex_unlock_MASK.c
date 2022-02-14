
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct nfp_cpp_mutex {int depth; scalar_t__ key; scalar_t__ address; struct nfp_cpp* cpp; int target; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct nfp_cpp*) ;
 int FUNC_2 (struct nfp_cpp*,scalar_t__ const,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct nfp_cpp*,scalar_t__ const,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct nfp_cpp_mutex *VAR_2)
{
 const u32 VAR_3 = FUNC_0(VAR_2->target, 4, 0);
 const u32 VAR_4 = FUNC_0(VAR_2->target, 3, 0);
 struct nfp_cpp *VAR_5 = VAR_2->cpp;
 u32 VAR_6, VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_5);

 if (VAR_2->depth > 1) {
  VAR_2->depth--;
  return 0;
 }

 VAR_9 = FUNC_2(VAR_2->cpp, VAR_4, VAR_2->address + 4, &VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6 != VAR_2->key)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_2->cpp, VAR_4, VAR_2->address, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7 != FUNC_4(VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_5, VAR_3, VAR_2->address,
        FUNC_5(VAR_8));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_2->depth = 0;
 return 0;
}
