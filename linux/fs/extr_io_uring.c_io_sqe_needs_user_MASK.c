
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct io_uring_sqe {int opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct io_uring_sqe *VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_2->opcode);

 return !(VAR_3 == VAR_0 ||
   VAR_3 == VAR_1);
}
