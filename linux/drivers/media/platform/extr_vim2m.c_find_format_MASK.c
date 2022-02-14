
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vim2m_fmt {scalar_t__ fourcc; } ;


 unsigned int VAR_0 ;
 struct vim2m_fmt* VAR_1 ;

__attribute__((used)) static struct vim2m_fmt *FUNC_0(u32 VAR_2)
{
 struct vim2m_fmt *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_3->fourcc == VAR_2)
   break;
 }

 if (VAR_4 == VAR_0)
  return ((void*)0);

 return &VAR_1[VAR_4];
}
