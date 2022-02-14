
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef unsigned long long u64 ;
struct gasket_dev {int dummy; } ;


 unsigned long long FUNC_0 (struct gasket_dev*,int,int ) ;
 int FUNC_1 (struct gasket_dev*,unsigned long long,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct gasket_dev *VAR_0, int VAR_1,
            ulong VAR_2, u64 VAR_3,
            u64 VAR_4, u64 VAR_5)
{
 u64 VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_6 = ((1ULL << VAR_4) - 1) << VAR_5;
 VAR_7 = (VAR_7 & ~VAR_6) | (VAR_3 << VAR_5);
 FUNC_1(VAR_0, VAR_7, VAR_1, VAR_2);
}
