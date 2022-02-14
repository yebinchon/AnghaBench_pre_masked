
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nvme_result {int dummy; } nvme_result ;
typedef int u16 ;
struct request {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct request*,int ,union nvme_result) ;

__attribute__((used)) static inline void FUNC_2(struct request *VAR_0, u16 VAR_1)
{
 union nvme_result VAR_2 = {};

 FUNC_1(VAR_0, FUNC_0(VAR_1 << 1), VAR_2);
}
