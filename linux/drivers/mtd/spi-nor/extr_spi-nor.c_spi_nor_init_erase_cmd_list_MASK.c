
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct spi_nor_erase_type {int dummy; } ;
struct spi_nor_erase_region {int offset; scalar_t__ size; int count; int list; } ;
struct spi_nor_erase_map {int dummy; } ;
struct spi_nor_erase_command {int offset; scalar_t__ size; int count; int list; } ;
struct TYPE_2__ {struct spi_nor_erase_map erase_map; } ;
struct spi_nor {TYPE_1__ params; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct spi_nor_erase_region*) ;
 int FUNC_1 (struct spi_nor_erase_region*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct list_head*) ;
 struct spi_nor_erase_type* FUNC_4 (struct spi_nor_erase_map const*,struct spi_nor_erase_region*,scalar_t__,int ) ;
 struct spi_nor_erase_region* FUNC_5 (struct spi_nor_erase_map const*,scalar_t__) ;
 struct spi_nor_erase_region* FUNC_6 (struct spi_nor_erase_region*,struct spi_nor_erase_type const*) ;
 scalar_t__ FUNC_7 (struct spi_nor_erase_region*) ;
 struct spi_nor_erase_region* FUNC_8 (struct spi_nor_erase_region*) ;

__attribute__((used)) static int FUNC_9(struct spi_nor *VAR_2,
           struct list_head *VAR_3,
           u64 VAR_4, u32 VAR_5)
{
 const struct spi_nor_erase_map *VAR_6 = &VAR_2->params.erase_map;
 const struct spi_nor_erase_type *VAR_7, *VAR_8 = ((void*)0);
 struct spi_nor_erase_region *VAR_9;
 struct spi_nor_erase_command *VAR_10 = ((void*)0);
 u64 VAR_11;
 int VAR_12 = -VAR_0;

 VAR_9 = FUNC_5(VAR_6, VAR_4);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_11 = FUNC_7(VAR_9);

 while (VAR_5) {
  VAR_7 = FUNC_4(VAR_6, VAR_9, VAR_4, VAR_5);
  if (!VAR_7)
   goto destroy_erase_cmd_list;

  if (VAR_8 != VAR_7 ||
      VAR_9->offset & VAR_1) {
   VAR_10 = FUNC_6(VAR_9, VAR_7);
   if (FUNC_0(VAR_10)) {
    VAR_12 = FUNC_1(VAR_10);
    goto destroy_erase_cmd_list;
   }

   FUNC_2(&VAR_10->list, VAR_3);
  } else {
   VAR_10->count++;
  }

  VAR_4 += VAR_10->size;
  VAR_5 -= VAR_10->size;

  if (VAR_5 && VAR_4 >= VAR_11) {
   VAR_9 = FUNC_8(VAR_9);
   if (!VAR_9)
    goto destroy_erase_cmd_list;
   VAR_11 = FUNC_7(VAR_9);
  }

  VAR_8 = VAR_7;
 }

 return 0;

destroy_erase_cmd_list:
 FUNC_3(VAR_3);
 return VAR_12;
}
