
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int dummy; } ;
struct ubi_sgl {size_t list_pos; int page_pos; struct scatterlist* sg; } ;
struct ubi_device {int dummy; } ;
struct scatterlist {int length; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*,struct ubi_volume*,int,int,int,int,int) ;

int FUNC_3(struct ubi_device *VAR_1, struct ubi_volume *VAR_2,
   struct ubi_sgl *VAR_3, int VAR_4, int VAR_5, int VAR_6,
   int VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct scatterlist *VAR_10;

 for (;;) {
  FUNC_1(VAR_3->list_pos < VAR_0);
  VAR_10 = &VAR_3->sg[VAR_3->list_pos];
  if (VAR_6 < VAR_10->length - VAR_3->page_pos)
   VAR_8 = VAR_6;
  else
   VAR_8 = VAR_10->length - VAR_3->page_pos;

  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_4,
           FUNC_0(VAR_10) + VAR_3->page_pos, VAR_5,
           VAR_8, VAR_7);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;
  if (!VAR_6) {
   VAR_3->page_pos += VAR_8;
   if (VAR_3->page_pos == VAR_10->length) {
    VAR_3->list_pos++;
    VAR_3->page_pos = 0;
   }

   break;
  }

  VAR_3->list_pos++;
  VAR_3->page_pos = 0;
 }

 return VAR_9;
}
