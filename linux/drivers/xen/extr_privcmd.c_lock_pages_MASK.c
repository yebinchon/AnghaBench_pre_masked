
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privcmd_dm_op_buf {scalar_t__ uptr; scalar_t__ size; } ;
struct page {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,unsigned int,int ,struct page**) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(
 struct privcmd_dm_op_buf VAR_3[], unsigned int VAR_4,
 struct page *VAR_5[], unsigned int VAR_6)
{
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  unsigned int VAR_8;
  int VAR_9;

  VAR_8 = FUNC_0(
   FUNC_2(VAR_3[VAR_7].uptr) + VAR_3[VAR_7].size,
   VAR_2);
  if (VAR_8 > VAR_6)
   return -VAR_0;

  VAR_9 = FUNC_1(
   (unsigned long) VAR_3[VAR_7].uptr,
   VAR_8, VAR_1, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_6 -= VAR_9;
  VAR_5 += VAR_9;
 }

 return 0;
}
