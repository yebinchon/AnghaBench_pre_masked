
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {unsigned int max_fds; scalar_t__ full_fds_bits; scalar_t__ close_on_exec; scalar_t__ open_fds; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_2 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct fdtable *VAR_1, struct fdtable *VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_4 = VAR_3 / VAR_0;
 VAR_5 = (VAR_1->max_fds - VAR_3) / VAR_0;
 FUNC_1(VAR_1->open_fds, VAR_2->open_fds, VAR_4);
 FUNC_2((char *)VAR_1->open_fds + VAR_4, 0, VAR_5);
 FUNC_1(VAR_1->close_on_exec, VAR_2->close_on_exec, VAR_4);
 FUNC_2((char *)VAR_1->close_on_exec + VAR_4, 0, VAR_5);

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_0(VAR_1->max_fds) - VAR_4;
 FUNC_1(VAR_1->full_fds_bits, VAR_2->full_fds_bits, VAR_4);
 FUNC_2((char *)VAR_1->full_fds_bits + VAR_4, 0, VAR_5);
}
