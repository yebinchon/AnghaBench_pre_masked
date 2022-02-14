
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct z_erofs_decompress_req {unsigned int inputsize; struct page** in; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*,unsigned int) ;
 unsigned int FUNC_4 (int ,unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_5(struct z_erofs_decompress_req *VAR_2,
           u8 *VAR_3, unsigned int VAR_4)
{




 struct page **VAR_5 = VAR_2->in;
 u8 *const VAR_6 = FUNC_0(0);
 u8 *VAR_7 = VAR_6;
 unsigned int VAR_8 = VAR_2->inputsize - VAR_4;
 unsigned int VAR_9 = FUNC_4(VAR_1, VAR_8, VAR_0 - VAR_4);

 while (VAR_7 < VAR_6 + VAR_8) {
  if (!VAR_3)
   VAR_3 = FUNC_1(*VAR_5);
  FUNC_3(VAR_7, VAR_3 + VAR_4, VAR_9);
  FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
  VAR_7 += VAR_9;
  VAR_4 = 0;
  VAR_9 = VAR_0;
  ++VAR_5;
 }
 return VAR_6;
}
