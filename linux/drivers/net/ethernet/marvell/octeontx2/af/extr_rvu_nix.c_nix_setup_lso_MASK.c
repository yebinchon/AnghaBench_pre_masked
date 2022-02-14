
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvu {int dummy; } ;
struct TYPE_2__ {int total; int in_use; } ;
struct nix_hw {TYPE_1__ lso; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rvu*,int,int,int,int*) ;
 int FUNC_3 (struct rvu*,int,int,int*) ;
 int FUNC_4 (struct rvu*,int,int ) ;
 int FUNC_5 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rvu *VAR_4, struct nix_hw *VAR_5, int VAR_6)
{
 u64 VAR_7, VAR_8, VAR_9 = 0;


 VAR_7 = (FUNC_4(VAR_4, VAR_6, VAR_0) >> 48) & 0xFF;
 VAR_5->lso.total = VAR_7;


 VAR_7 = FUNC_4(VAR_4, VAR_6, VAR_1);



 VAR_7 &= ~((0xFFFFULL << 32) | (0xFFFFULL << 16));
 VAR_7 |= (0xFFF2ULL << 32) | (0xFFF2ULL << 16);
 FUNC_5(VAR_4, VAR_6, VAR_1, VAR_7 | FUNC_0(63));





 VAR_8 = VAR_2;
 FUNC_2(VAR_4, VAR_6, VAR_8, 1, &VAR_9);
 FUNC_3(VAR_4, VAR_6, VAR_8, &VAR_9);


 for (; VAR_9 < 8; VAR_9++) {
  FUNC_5(VAR_4, VAR_6,
       FUNC_1(VAR_8, VAR_9), 0x0ULL);
 }
 VAR_5->lso.in_use++;


 VAR_8 = VAR_3;
 VAR_9 = 0;
 FUNC_2(VAR_4, VAR_6, VAR_8, 0, &VAR_9);
 FUNC_3(VAR_4, VAR_6, VAR_8, &VAR_9);


 for (; VAR_9 < 8; VAR_9++) {
  FUNC_5(VAR_4, VAR_6,
       FUNC_1(VAR_8, VAR_9), 0x0ULL);
 }
 VAR_5->lso.in_use++;
}
