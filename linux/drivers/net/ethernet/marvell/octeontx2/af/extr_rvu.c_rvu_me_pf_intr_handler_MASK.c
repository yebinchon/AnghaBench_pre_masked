
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u8 ;
typedef unsigned long long u64 ;
struct rvu {TYPE_1__* hw; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned long long total_pfs; } ;


 int FUNC_0 (unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_1 (struct rvu*,int ,int ) ;
 int FUNC_2 (struct rvu*,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct rvu *VAR_6 = (struct rvu *)VAR_5;
 u64 VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_0, VAR_2);




 for (VAR_8 = 0; VAR_8 < VAR_6->hw->total_pfs; VAR_8++) {
  if (VAR_7 & (1ULL << VAR_8)) {

   FUNC_2(VAR_6, VAR_0, VAR_3,
        FUNC_0(VAR_8));

   FUNC_2(VAR_6, VAR_0, VAR_2,
        FUNC_0(VAR_8));
  }
 }

 return VAR_1;
}
