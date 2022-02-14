
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*,struct page*,int ,int ) ;
 int FUNC_5 (struct scatterlist*) ;
 struct page* FUNC_6 (unsigned char*) ;
 struct scatterlist* FUNC_7 (int ) ;

__attribute__((used)) static struct scatterlist *FUNC_8(unsigned char *VAR_1,
        int VAR_2)
{
 struct scatterlist *VAR_3;
 struct page *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_7(FUNC_2(VAR_2, sizeof(*VAR_3)));
 if (((void*)0) == VAR_3)
  return ((void*)0);
 FUNC_3(VAR_3, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_1 += VAR_0) {
  VAR_4 = FUNC_6(VAR_1);
  if (((void*)0) == VAR_4)
   goto err;
  FUNC_0(FUNC_1(VAR_4));
  FUNC_4(&VAR_3[VAR_5], VAR_4, VAR_0, 0);
 }
 return VAR_3;

err:
 FUNC_5(VAR_3);
 return ((void*)0);
}
