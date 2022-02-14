
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*,int ) ;
 int FUNC_1 (struct qla_hw_data*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct qla_hw_data *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 |= (VAR_1 << (VAR_2->portnum * 4));
 FUNC_1(VAR_2, VAR_0, VAR_3);
}
