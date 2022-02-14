
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct media_pad {unsigned int index; unsigned long flags; } ;


 int VAR_0 ;
 struct media_pad* FUNC_0 (int ) ;
 int VAR_1 ;
 struct media_pad* FUNC_1 (unsigned int,int,int ) ;

struct media_pad *FUNC_2(u16 VAR_2, const unsigned long *VAR_3)
{
 struct media_pad *VAR_4;
 unsigned int VAR_5;


 VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4[VAR_5].index = VAR_5;
  VAR_4[VAR_5].flags = VAR_3[VAR_5];
 }

 return VAR_4;
}
