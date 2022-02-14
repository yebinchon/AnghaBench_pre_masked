
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned long,int,int ,struct page**) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_5,
     unsigned long VAR_6,
     unsigned int VAR_7,
     int VAR_8,
     struct page *VAR_9[VAR_2],
     unsigned int *VAR_10)
{
 int VAR_11;
 int VAR_12 = ((VAR_6 - VAR_5) >> VAR_3) + 1;

 if (VAR_12 > VAR_2) {
  VAR_12 = VAR_2;
  *VAR_10 = VAR_4;
 } else {
  *VAR_10 = VAR_7;
 }

 VAR_11 = FUNC_0(VAR_5, VAR_12,
      !VAR_8 ? VAR_1 : 0,
      VAR_9);
 if (VAR_11 <= 0)
  return -VAR_0;
 if (VAR_11 < VAR_12)
  *VAR_10 = VAR_4;

 return VAR_11;
}
