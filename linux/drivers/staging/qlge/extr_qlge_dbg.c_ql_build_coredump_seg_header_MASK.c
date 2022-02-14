
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct mpi_coredump_segment_header {int description; void* segSize; void* segNum; int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpi_coredump_segment_header*,int ,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void FUNC_2(
  struct mpi_coredump_segment_header *VAR_1,
  u32 VAR_2, u32 VAR_3, u8 *VAR_4)
{
 FUNC_0(VAR_1, 0, sizeof(struct mpi_coredump_segment_header));
 VAR_1->cookie = VAR_0;
 VAR_1->segNum = VAR_2;
 VAR_1->segSize = VAR_3;
 FUNC_1(VAR_1->description, VAR_4, (sizeof(VAR_1->description)) - 1);
}
