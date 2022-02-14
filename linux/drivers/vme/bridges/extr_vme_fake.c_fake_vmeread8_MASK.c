
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct fake_driver {TYPE_1__* slaves; } ;
struct TYPE_2__ {unsigned long long vme_base; unsigned long long size; scalar_t__ aspace; scalar_t__ cycle; scalar_t__ buf_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct fake_driver*,unsigned long long,scalar_t__,scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct fake_driver *VAR_1, unsigned long long VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 u8 VAR_5 = 0xff;
 int VAR_6;
 unsigned long long VAR_7, VAR_8, VAR_9;
 u8 *VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = VAR_1->slaves[VAR_6].vme_base;
  VAR_8 = VAR_1->slaves[VAR_6].vme_base + VAR_1->slaves[VAR_6].size;

  if (VAR_3 != VAR_1->slaves[VAR_6].aspace)
   continue;

  if (VAR_4 != VAR_1->slaves[VAR_6].cycle)
   continue;

  if ((VAR_2 >= VAR_7) && (VAR_2 < VAR_8)) {
   VAR_9 = VAR_2 - VAR_1->slaves[VAR_6].vme_base;
   VAR_10 = (u8 *)(VAR_1->slaves[VAR_6].buf_base + VAR_9);
   VAR_5 = *VAR_10;

   break;
  }
 }

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
