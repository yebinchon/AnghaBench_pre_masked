
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct scif_window {size_t offset; size_t nr_pages; } ;
typedef size_t s64 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,struct scif_window*,size_t) ;
 int VAR_3 ;
 struct scif_window* FUNC_1 (struct scif_window*,int ) ;
 int FUNC_2 (void*,void*,size_t) ;
 size_t FUNC_3 (int,size_t) ;

__attribute__((used)) static void FUNC_4(s64 VAR_4, struct scif_window *VAR_5,
        u8 *VAR_6, size_t VAR_7, bool VAR_8)
{
 void *VAR_9;
 size_t VAR_10;
 int VAR_11;
 s64 VAR_12;

 VAR_11 = VAR_4 & ~VAR_0;
 VAR_10 = VAR_2 - VAR_11;

 if (VAR_7 < VAR_10)
  VAR_10 = VAR_7;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_10);
 if (!VAR_9)
  return;
 if (VAR_8)
  FUNC_2(VAR_6, VAR_9, VAR_10);
 else
  FUNC_2(VAR_9, VAR_6, VAR_10);

 VAR_4 += VAR_10;
 VAR_6 += VAR_10;
 VAR_7 -= VAR_10;

 VAR_12 = VAR_5->offset +
  (VAR_5->nr_pages << VAR_1);
 while (VAR_7) {
  if (VAR_4 == VAR_12) {
   VAR_5 = FUNC_1(VAR_5, VAR_3);
   VAR_12 = VAR_5->offset +
    (VAR_5->nr_pages << VAR_1);
  }
  VAR_10 = FUNC_3(VAR_2, VAR_7);
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_10);
  if (!VAR_9)
   return;
  if (VAR_8)
   FUNC_2(VAR_6, VAR_9, VAR_10);
  else
   FUNC_2(VAR_9, VAR_6, VAR_10);
  VAR_4 += VAR_10;
  VAR_6 += VAR_10;
  VAR_7 -= VAR_10;
 }
}
