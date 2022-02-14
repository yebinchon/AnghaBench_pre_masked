
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct icm {scalar_t__ vnd_cap; int upstream_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct icm *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_4 + FUNC_0(VAR_6);
 u32 VAR_8;

 do {
  FUNC_2(VAR_5->upstream_port,
          VAR_5->vnd_cap + VAR_1, &VAR_8);
  if (!(VAR_8 & VAR_2)) {
   if (VAR_8 & VAR_3)
    break;
   return 0;
  }

  FUNC_1(50);
 } while (FUNC_3(VAR_4, VAR_7));

 return -VAR_0;
}
