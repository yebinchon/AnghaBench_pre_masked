
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cedrus_format {unsigned int capabilities; scalar_t__ pixelformat; scalar_t__ directions; } ;


 unsigned int VAR_0 ;
 struct cedrus_format* VAR_1 ;

__attribute__((used)) static struct cedrus_format *FUNC_0(u32 VAR_2, u32 VAR_3,
      unsigned int VAR_4)
{
 struct cedrus_format *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_1[VAR_6];

  if (VAR_5->capabilities && (VAR_5->capabilities & VAR_4) !=
      VAR_5->capabilities)
   continue;

  if (VAR_5->pixelformat == VAR_2 &&
      (VAR_5->directions & VAR_3) != 0)
   break;
 }

 if (VAR_6 == VAR_0)
  return ((void*)0);

 return &VAR_1[VAR_6];
}
