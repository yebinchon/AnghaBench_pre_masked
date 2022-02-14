
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct TYPE_2__ {int mask; } ;
struct spi_nor_erase_map {int * erase_type; } ;
struct spi_nor_flash_parameter {int size; int * page_programs; TYPE_1__ hwcaps; int * reads; int page_size; int setup; int set_4byte; int quad_enable; struct spi_nor_erase_map erase_map; } ;
struct spi_nor {struct flash_info* info; struct spi_nor_flash_parameter params; } ;
struct flash_info {unsigned int sector_size; int n_sectors; int flags; int page_size; } ;
struct device_node {int dummy; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct device_node*,char*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 struct device_node* FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor_erase_map*,size_t,int) ;
 int FUNC_4 (int *,unsigned int,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct spi_nor *VAR_34)
{
 struct spi_nor_flash_parameter *VAR_35 = &VAR_34->params;
 struct spi_nor_erase_map *VAR_36 = &VAR_35->erase_map;
 const struct flash_info *VAR_37 = VAR_34->info;
 struct device_node *VAR_38 = FUNC_2(VAR_34);
 u8 VAR_39, VAR_40;


 VAR_35->quad_enable = VAR_31;
 VAR_35->set_4byte = VAR_32;
 VAR_35->setup = VAR_33;


 VAR_35->size = (u64)VAR_37->sector_size * VAR_37->n_sectors;
 VAR_35->page_size = VAR_37->page_size;

 if (!(VAR_37->flags & VAR_28)) {

  VAR_35->hwcaps.mask |= VAR_13;


  if (VAR_38 && !FUNC_1(VAR_38, "m25p,fast-read"))
   VAR_35->hwcaps.mask &= ~VAR_13;
 }


 VAR_35->hwcaps.mask |= VAR_9;
 FUNC_6(&VAR_35->reads[VAR_3],
      0, 0, VAR_21,
      VAR_14);

 if (VAR_35->hwcaps.mask & VAR_13)
  FUNC_6(&VAR_35->reads[VAR_7],
       0, 8, VAR_25,
       VAR_14);

 if (VAR_37->flags & VAR_27) {
  VAR_35->hwcaps.mask |= VAR_10;
  FUNC_6(&VAR_35->reads[VAR_4],
       0, 8, VAR_22,
       VAR_15);
 }

 if (VAR_37->flags & VAR_30) {
  VAR_35->hwcaps.mask |= VAR_11;
  FUNC_6(&VAR_35->reads[VAR_5],
       0, 8, VAR_23,
       VAR_16);
 }

 if (VAR_37->flags & VAR_29) {
  VAR_35->hwcaps.mask |= VAR_12;
  FUNC_6(&VAR_35->reads[VAR_6],
       0, 8, VAR_24,
       VAR_17);
 }


 VAR_35->hwcaps.mask |= VAR_8;
 FUNC_5(&VAR_35->page_programs[VAR_2],
    VAR_20, VAR_14);





 VAR_40 = 0;
 VAR_39 = 0;
 if (VAR_37->flags & VAR_1) {
  VAR_40 |= FUNC_0(VAR_39);
  FUNC_4(&VAR_36->erase_type[VAR_39], 4096u,
           VAR_19);
  VAR_39++;
 } else if (VAR_37->flags & VAR_0) {
  VAR_40 |= FUNC_0(VAR_39);
  FUNC_4(&VAR_36->erase_type[VAR_39], 4096u,
           VAR_18);
  VAR_39++;
 }
 VAR_40 |= FUNC_0(VAR_39);
 FUNC_4(&VAR_36->erase_type[VAR_39], VAR_37->sector_size,
          VAR_26);
 FUNC_3(VAR_36, VAR_40, VAR_35->size);
}
