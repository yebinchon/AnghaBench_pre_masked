
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ocfs2_info_free_chunk_list {unsigned int* fc_clusters; int * fc_chunks; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_info_free_chunk_list *VAR_1,
       unsigned int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 >= VAR_0)
  VAR_3 = VAR_0 - 1;

 VAR_1->fc_chunks[VAR_3]++;
 VAR_1->fc_clusters[VAR_3] += VAR_2;
}
