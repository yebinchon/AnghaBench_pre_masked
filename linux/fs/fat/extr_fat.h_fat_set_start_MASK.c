
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_dir_entry {void* starthi; void* start; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct msdos_dir_entry *VAR_0, int VAR_1)
{
 VAR_0->start = FUNC_0(VAR_1);
 VAR_0->starthi = FUNC_0(VAR_1 >> 16);
}
