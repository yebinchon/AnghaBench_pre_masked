
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct nfp_cpp_mutex {int target; unsigned long long address; scalar_t__ depth; scalar_t__ key; struct nfp_cpp* cpp; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 struct nfp_cpp_mutex* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nfp_cpp*) ;
 int FUNC_3 (int ,int*,unsigned long long) ;
 int FUNC_4 (struct nfp_cpp*,scalar_t__ const,unsigned long long,scalar_t__*) ;

struct nfp_cpp_mutex *FUNC_5(struct nfp_cpp *VAR_1, int VAR_2,
       unsigned long long VAR_3, u32 VAR_4)
{
 const u32 VAR_5 = FUNC_0(VAR_2, 3, 0);
 u16 VAR_6 = FUNC_2(VAR_1);
 struct nfp_cpp_mutex *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_6, &VAR_2, VAR_3);
 if (VAR_8)
  return ((void*)0);

 VAR_8 = FUNC_4(VAR_1, VAR_5, VAR_3 + 4, &VAR_9);
 if (VAR_8 < 0)
  return ((void*)0);

 if (VAR_9 != VAR_4)
  return ((void*)0);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->cpp = VAR_1;
 VAR_7->target = VAR_2;
 VAR_7->address = VAR_3;
 VAR_7->key = VAR_4;
 VAR_7->depth = 0;

 return VAR_7;
}
