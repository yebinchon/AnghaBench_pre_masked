
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_map_data {unsigned long offset; } ;
struct st_buffer {struct page** mapped_pages; struct rq_map_data map_data; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long,int const,int ,struct page**) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (unsigned int const,int,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct st_buffer *VAR_8,
         const unsigned int VAR_9, unsigned long VAR_10,
         size_t VAR_11, int VAR_12)
{
 unsigned long VAR_13 = (VAR_10 + VAR_11 + VAR_6 - 1) >> VAR_5;
 unsigned long VAR_14 = VAR_10 >> VAR_5;
 const int VAR_15 = VAR_13 - VAR_14;
 int VAR_16, VAR_17, VAR_18;
 struct page **VAR_19;
 struct rq_map_data *VAR_20 = &VAR_8->map_data;


 if ((VAR_10 + VAR_11) < VAR_10)
  return -VAR_0;


        if (VAR_15 > VAR_9)
  return -VAR_1;


 if (VAR_11 == 0)
  return 0;

 VAR_19 = FUNC_3(VAR_9, sizeof(*VAR_19), VAR_3);
 if (VAR_19 == ((void*)0))
  return -VAR_1;



 VAR_16 = FUNC_1(VAR_10, VAR_15, VAR_12 == VAR_7 ? VAR_2 : 0,
      VAR_19);


 if (VAR_16 < VAR_15)
  goto out_unmap;

        for (VAR_17=0; VAR_17 < VAR_15; VAR_17++) {



  FUNC_0(VAR_19[VAR_17]);
        }

 VAR_20->offset = VAR_10 & ~VAR_4;
 VAR_8->mapped_pages = VAR_19;

 return VAR_15;
 out_unmap:
 if (VAR_16 > 0) {
  for (VAR_18=0; VAR_18 < VAR_16; VAR_18++)
   FUNC_4(VAR_19[VAR_18]);
  VAR_16 = 0;
 }
 FUNC_2(VAR_19);
 return VAR_16;
}
