
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {int dummy; } ;
struct nix_lso_format {int offset; int sizem1; int alg; void* layer; int member_0; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct rvu*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rvu *VAR_3, int VAR_4,
     u64 VAR_5, u64 *VAR_6)
{
 struct nix_lso_format VAR_7 = {0};


 VAR_7.layer = VAR_2;
 VAR_7.offset = 4;
 VAR_7.sizem1 = 3;
 VAR_7.alg = VAR_0;
 FUNC_1(VAR_3, VAR_4,
      FUNC_0(VAR_5, (*VAR_6)++),
      *(u64 *)&VAR_7);


 VAR_7.layer = VAR_2;
 VAR_7.offset = 12;
 VAR_7.sizem1 = 1;
 VAR_7.alg = VAR_1;
 FUNC_1(VAR_3, VAR_4,
      FUNC_0(VAR_5, (*VAR_6)++),
      *(u64 *)&VAR_7);
}
