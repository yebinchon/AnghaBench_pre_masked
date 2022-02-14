
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct gasket_driver_desc {scalar_t__ legacy_mmap_address_offset; struct gasket_bar_desc* bar_descriptions; } ;
struct gasket_bar_desc {scalar_t__ permissions; int num_mappable_regions; TYPE_1__* mappable_regions; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ length_bytes; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_1(char *VAR_2,
         const struct gasket_driver_desc *VAR_3,
         int VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;
 ssize_t VAR_7 = 0;
 ulong VAR_8, VAR_9;
 struct gasket_bar_desc VAR_10 =
  VAR_3->bar_descriptions[VAR_4];

 if (VAR_10.permissions == VAR_0)
  return 0;
 for (VAR_5 = 0;
      VAR_5 < VAR_10.num_mappable_regions && VAR_7 < VAR_1;
      VAR_5++) {
  VAR_8 = VAR_10.mappable_regions[VAR_5].start -
      VAR_3->legacy_mmap_address_offset;
  VAR_9 = VAR_10.mappable_regions[VAR_5].start -
      VAR_3->legacy_mmap_address_offset +
      VAR_10.mappable_regions[VAR_5].length_bytes;
  VAR_6 = FUNC_0(VAR_2, VAR_1 - VAR_7,
        "0x%08lx-0x%08lx\n", VAR_8, VAR_9);
  VAR_7 += VAR_6;
  VAR_2 += VAR_6;
 }
 return VAR_7;
}
