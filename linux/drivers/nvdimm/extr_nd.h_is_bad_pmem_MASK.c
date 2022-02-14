
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct badblocks {scalar_t__ count; } ;
typedef int sector_t ;


 int FUNC_0 (struct badblocks*,int ,unsigned int,int *,int*) ;

__attribute__((used)) static inline bool FUNC_1(struct badblocks *VAR_0, sector_t VAR_1,
  unsigned int VAR_2)
{
 if (VAR_0->count) {
  sector_t VAR_3;
  int VAR_4;

  return !!FUNC_0(VAR_0, VAR_1, VAR_2 / 512, &VAR_3,
    &VAR_4);
 }

 return 0;
}
