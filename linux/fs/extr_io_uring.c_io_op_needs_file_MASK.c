
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int opcode; } ;




 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct io_uring_sqe *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->opcode);

 switch (VAR_1) {
 case 129:
 case 128:
  return 0;
 default:
  return 1;
 }
}
