
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct TCP_Server_Info {int total_read; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct TCP_Server_Info*,struct page*,int ,size_t) ;
 int FUNC_1 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct TCP_Server_Info *VAR_1, struct page **VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct page *VAR_7 = VAR_2[VAR_5];
  size_t VAR_8;

  VAR_8 = VAR_4;
  if (VAR_4 >= VAR_0) {

   VAR_8 = VAR_0;
   VAR_4 -= VAR_8;
  } else {
   FUNC_1(VAR_7, VAR_4, VAR_0 - VAR_4);
   VAR_4 = 0;
  }
  VAR_6 = FUNC_0(VAR_1, VAR_7, 0, VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_1->total_read += VAR_6;
 }

 return 0;
}
