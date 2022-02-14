
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {unsigned int max_fds; int open_fds; int full_fds_bits; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct fdtable *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->max_fds;
 unsigned int VAR_4 = VAR_3 / VAR_0;
 unsigned int VAR_5 = VAR_2 / VAR_0;

 VAR_5 = FUNC_0(VAR_1->full_fds_bits, VAR_4, VAR_5) * VAR_0;
 if (VAR_5 > VAR_3)
  return VAR_3;
 if (VAR_5 > VAR_2)
  VAR_2 = VAR_5;
 return FUNC_0(VAR_1->open_fds, VAR_3, VAR_2);
}
