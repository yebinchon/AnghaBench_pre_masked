
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ppn_set {int num_produce_pages; int num_consume_pages; scalar_t__* consume_ppns; scalar_t__* produce_ppns; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, const struct ppn_set *VAR_2)
{
 if (FUNC_1()) {
  FUNC_0(VAR_1, VAR_2->produce_ppns,
         VAR_2->num_produce_pages *
         sizeof(*VAR_2->produce_ppns));
  FUNC_0(VAR_1 +
         VAR_2->num_produce_pages *
         sizeof(*VAR_2->produce_ppns),
         VAR_2->consume_ppns,
         VAR_2->num_consume_pages *
         sizeof(*VAR_2->consume_ppns));
 } else {
  int VAR_3;
  u32 *VAR_4 = (u32 *) VAR_1;

  for (VAR_3 = 0; VAR_3 < VAR_2->num_produce_pages; VAR_3++)
   VAR_4[VAR_3] = (u32) VAR_2->produce_ppns[VAR_3];

  VAR_4 = &VAR_4[VAR_2->num_produce_pages];

  for (VAR_3 = 0; VAR_3 < VAR_2->num_consume_pages; VAR_3++)
   VAR_4[VAR_3] = (u32) VAR_2->consume_ppns[VAR_3];
 }

 return VAR_0;
}
