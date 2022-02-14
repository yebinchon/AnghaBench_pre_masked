
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ u64 ;
typedef int trx ;
struct trx_header {scalar_t__ magic; scalar_t__* offset; } ;
struct mtd_partition {char* name; scalar_t__ offset; scalar_t__ size; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct mtd_partition* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct mtd_partition*) ;
 int FUNC_2 (struct mtd_info*,int ,int,size_t*,size_t*) ;
 char* FUNC_3 (struct mtd_info*,scalar_t__) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_5,
       const struct mtd_partition **VAR_6,
       struct mtd_part_parser_data *VAR_7)
{
 struct mtd_partition *VAR_8;
 struct mtd_partition *VAR_9;
 struct trx_header VAR_10;
 size_t VAR_11;
 uint8_t VAR_12 = 0, VAR_13 = 0;
 int VAR_14;

 VAR_8 = FUNC_0(VAR_4, sizeof(struct mtd_partition),
   VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_5, 0, sizeof(VAR_10), &VAR_11, (uint8_t *)&VAR_10);
 if (VAR_14) {
  FUNC_4("MTD reading error: %d\n", VAR_14);
  FUNC_1(VAR_8);
  return VAR_14;
 }

 if (VAR_10.magic != VAR_3) {
  FUNC_1(VAR_8);
  return -VAR_0;
 }


 if (VAR_10.offset[2]) {
  VAR_9 = &VAR_8[VAR_12++];
  VAR_9->name = "loader";
  VAR_9->offset = VAR_10.offset[VAR_13];
  VAR_13++;
 }

 if (VAR_10.offset[VAR_13]) {
  VAR_9 = &VAR_8[VAR_12++];
  VAR_9->name = "linux";
  VAR_9->offset = VAR_10.offset[VAR_13];
  VAR_13++;
 }

 if (VAR_10.offset[VAR_13]) {
  VAR_9 = &VAR_8[VAR_12++];
  VAR_9->name = FUNC_3(VAR_5, VAR_10.offset[VAR_13]);
  VAR_9->offset = VAR_10.offset[VAR_13];
  VAR_13++;
 }





 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  u64 VAR_15 = (VAR_13 < VAR_12 - 1) ?
           VAR_8[VAR_13 + 1].offset : VAR_5->size;

  VAR_8[VAR_13].size = VAR_15 - VAR_8[VAR_13].offset;
 }

 *VAR_6 = VAR_8;
 return VAR_13;
}
