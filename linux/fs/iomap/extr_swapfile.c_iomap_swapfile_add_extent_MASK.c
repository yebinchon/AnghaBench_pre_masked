
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct iomap {scalar_t__ offset; scalar_t__ length; scalar_t__ addr; } ;
struct iomap_swapfile_info {int lowest_ppage; int highest_ppage; unsigned long nr_pages; int nr_extents; int sis; struct iomap iomap; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_3(struct iomap_swapfile_info *VAR_2)
{
 struct iomap *VAR_3 = &VAR_2->iomap;
 unsigned long VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;
 int VAR_8;





 VAR_5 = FUNC_0(VAR_3->addr, VAR_1) >> VAR_0;
 VAR_7 = FUNC_1(VAR_3->addr + VAR_3->length, VAR_1) >>
   VAR_0;


 if (VAR_5 >= VAR_7)
  return 0;
 VAR_4 = VAR_7 - VAR_5;






 VAR_6 = VAR_5;
 if (VAR_3->offset == 0)
  VAR_6++;
 if (VAR_2->lowest_ppage > VAR_6)
  VAR_2->lowest_ppage = VAR_6;
 if (VAR_2->highest_ppage < (VAR_7 - 1))
  VAR_2->highest_ppage = VAR_7 - 1;


 VAR_8 = FUNC_2(VAR_2->sis, VAR_2->nr_pages, VAR_4, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_2->nr_extents += VAR_8;
 VAR_2->nr_pages += VAR_4;
 return 0;
}
