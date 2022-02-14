
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_of_pages; int last_page_available_bytes; } ;
struct TYPE_3__ {scalar_t__ first_page_offset; } ;
struct cio2_fbpt_entry {int lop_page_addr; TYPE_2__ second_entry; TYPE_1__ first_entry; } ;
struct cio2_device {int dummy_lop_bus_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cio2_device*,struct cio2_fbpt_entry*) ;

__attribute__((used)) static void FUNC_1(struct cio2_device *VAR_3,
           struct cio2_fbpt_entry
           VAR_4[VAR_0])
{
 unsigned int VAR_5;

 VAR_4[0].first_entry.first_page_offset = 0;
 VAR_4[1].second_entry.num_of_pages =
  VAR_1 / sizeof(u32) * VAR_0;
 VAR_4[1].second_entry.last_page_available_bytes = VAR_1 - 1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4[VAR_5].lop_page_addr = VAR_3->dummy_lop_bus_addr >> VAR_2;

 FUNC_0(VAR_3, VAR_4);
}
