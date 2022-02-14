
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpsl_nand_partinfo {int start; int end; } ;
struct sharpsl_ftl {int dummy; } ;
struct mtd_partition {char* name; void* size; void* offset; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtd_partition* FUNC_0 (int,int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (struct sharpsl_ftl*) ;
 int FUNC_7 (struct mtd_info*,struct sharpsl_ftl*) ;
 int FUNC_8 (struct mtd_info*,int ,int,struct sharpsl_nand_partinfo*,struct sharpsl_ftl*) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_5,
     const struct mtd_partition **VAR_6,
     struct mtd_part_parser_data *VAR_7)
{
 struct sharpsl_ftl VAR_8;
 struct sharpsl_nand_partinfo VAR_9[VAR_2];
 struct mtd_partition *VAR_10;
 int VAR_11;


 VAR_11 = FUNC_5(VAR_5);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_7(VAR_5, &VAR_8);
 if (VAR_11)
  return VAR_11;


 FUNC_3("sharpslpart: try reading first partition table\n");
 VAR_11 = FUNC_8(VAR_5,
      VAR_3,
      sizeof(VAR_9), VAR_9, &VAR_8);
 if (VAR_11) {

  FUNC_4("sharpslpart: first partition table is invalid, retry using the second\n");
  VAR_11 = FUNC_8(VAR_5,
       VAR_4,
       sizeof(VAR_9), VAR_9, &VAR_8);
 }


 FUNC_6(&VAR_8);

 if (VAR_11) {
  FUNC_2("sharpslpart: both partition tables are invalid\n");
  return VAR_11;
 }

 VAR_10 = FUNC_0(VAR_2,
         sizeof(*VAR_10),
         VAR_1);
 if (!VAR_10)
  return -VAR_0;


 VAR_10[0].name = "smf";
 VAR_10[0].offset = FUNC_1(VAR_9[0].start);
 VAR_10[0].size = FUNC_1(VAR_9[0].end) -
         FUNC_1(VAR_9[0].start);

 VAR_10[1].name = "root";
 VAR_10[1].offset = FUNC_1(VAR_9[1].start);
 VAR_10[1].size = FUNC_1(VAR_9[1].end) -
         FUNC_1(VAR_9[1].start);

 VAR_10[2].name = "home";
 VAR_10[2].offset = FUNC_1(VAR_9[2].start);
 VAR_10[2].size = FUNC_1(VAR_9[2].end) -
         FUNC_1(VAR_9[2].start);

 *VAR_6 = VAR_10;
 return VAR_2;
}
