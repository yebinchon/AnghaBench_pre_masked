
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct jpu_fmt {scalar_t__ fourcc; unsigned int types; } ;


 unsigned int FUNC_0 (struct jpu_fmt*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct jpu_fmt* VAR_5 ;

__attribute__((used)) static struct jpu_fmt *FUNC_1(bool VAR_6, u32 VAR_7,
           unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10;

 if (VAR_6)
  VAR_10 = VAR_8 == VAR_4 ? VAR_3 :
            VAR_2;
 else
  VAR_10 = VAR_8 == VAR_4 ? VAR_1 :
            VAR_0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
  struct jpu_fmt *VAR_11 = &VAR_5[VAR_9];

  if (VAR_11->fourcc == VAR_7 && VAR_11->types & VAR_10)
   return VAR_11;
 }

 return ((void*)0);
}
