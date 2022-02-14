
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qbman_swp {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qbman_swp*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct qbman_swp *VAR_3,
         u8 VAR_4)
{
 if (VAR_4 < 16)
  FUNC_0(VAR_3, VAR_0 + VAR_4 * 4,
         VAR_2);
 else
  FUNC_0(VAR_3, VAR_1 +
         (VAR_4 - 16) * 4,
         VAR_2);
}
