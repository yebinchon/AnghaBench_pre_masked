
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct virtqueue*,struct scatterlist**,unsigned int,unsigned int,unsigned int,void*,int *,int ) ;

int FUNC_2(struct virtqueue *VAR_0,
        struct scatterlist *VAR_1[],
        unsigned int VAR_2,
        unsigned int VAR_3,
        void *VAR_4,
        gfp_t VAR_5)
{
 unsigned int VAR_6, VAR_7 = 0;


 for (VAR_6 = 0; VAR_6 < VAR_2 + VAR_3; VAR_6++) {
  struct scatterlist *VAR_8;

  for (VAR_8 = VAR_1[VAR_6]; VAR_8; VAR_8 = FUNC_0(VAR_8))
   VAR_7++;
 }
 return FUNC_1(VAR_0, VAR_1, VAR_7, VAR_2, VAR_3,
        VAR_4, ((void*)0), VAR_5);
}
