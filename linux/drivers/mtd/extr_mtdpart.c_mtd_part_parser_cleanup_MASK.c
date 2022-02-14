
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partitions {int nr_parts; int parts; struct mtd_part_parser* parser; } ;
struct mtd_part_parser {int (* cleanup ) (int ,int ) ;} ;


 int FUNC_0 (struct mtd_part_parser const*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct mtd_partitions *VAR_0)
{
 const struct mtd_part_parser *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->parser;
 if (VAR_1) {
  if (VAR_1->cleanup)
   VAR_1->cleanup(VAR_0->parts, VAR_0->nr_parts);

  FUNC_0(VAR_1);
 }
}
