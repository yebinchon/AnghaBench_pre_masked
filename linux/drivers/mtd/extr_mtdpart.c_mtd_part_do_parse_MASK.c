
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partitions {int nr_parts; struct mtd_part_parser* parser; int parts; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_part_parser {int (* parse_fn ) (struct mtd_info*,int *,struct mtd_part_parser_data*) ;int name; } ;
struct mtd_info {int name; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (struct mtd_info*,int *,struct mtd_part_parser_data*) ;

__attribute__((used)) static int FUNC_3(struct mtd_part_parser *VAR_0,
        struct mtd_info *VAR_1,
        struct mtd_partitions *VAR_2,
        struct mtd_part_parser_data *VAR_3)
{
 int VAR_4;

 VAR_4 = (*VAR_0->parse_fn)(VAR_1, &VAR_2->parts, VAR_3);
 FUNC_0("%s: parser %s: %i\n", VAR_1->name, VAR_0->name, VAR_4);
 if (VAR_4 <= 0)
  return VAR_4;

 FUNC_1("%d %s partitions found on MTD device %s\n", VAR_4,
    VAR_0->name, VAR_1->name);

 VAR_2->nr_parts = VAR_4;
 VAR_2->parser = VAR_0;

 return VAR_4;
}
