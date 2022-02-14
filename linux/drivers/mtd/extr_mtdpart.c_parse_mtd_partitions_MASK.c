
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partitions {int nr_parts; int parts; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_part_parser {char const* name; } ;
struct mtd_info {int name; } ;


 int FUNC_0 (struct mtd_info*,int ,int) ;
 char** VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_part_parser*,struct mtd_info*,struct mtd_partitions*,struct mtd_part_parser_data*) ;
 int FUNC_3 (struct mtd_info*,struct mtd_partitions*) ;
 int FUNC_4 (struct mtd_partitions*) ;
 struct mtd_part_parser* FUNC_5 (char const* const) ;
 int FUNC_6 (struct mtd_part_parser*) ;
 int FUNC_7 (char*,int ,char const*) ;
 int FUNC_8 (char*,char const* const) ;
 int FUNC_9 (char const* const,char*) ;

int FUNC_10(struct mtd_info *VAR_2, const char *const *VAR_3,
    struct mtd_part_parser_data *VAR_4)
{
 struct mtd_partitions VAR_5 = { };
 struct mtd_part_parser *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_2) ? VAR_1 :
   VAR_0;

 for ( ; *VAR_3; VAR_3++) {





  if (!FUNC_9(*VAR_3, "ofpart")) {
   VAR_7 = FUNC_3(VAR_2, &VAR_5);
  } else {
   FUNC_7("%s: parsing partitions %s\n", VAR_2->name,
     *VAR_3);
   VAR_6 = FUNC_5(*VAR_3);
   if (!VAR_6 && !FUNC_8("%s", *VAR_3))
    VAR_6 = FUNC_5(*VAR_3);
   FUNC_7("%s: got parser %s\n", VAR_2->name,
    VAR_6 ? VAR_6->name : ((void*)0));
   if (!VAR_6)
    continue;
   VAR_7 = FUNC_2(VAR_6, VAR_2, &VAR_5, VAR_4);
   if (VAR_7 <= 0)
    FUNC_6(VAR_6);
  }

  if (VAR_7 > 0) {
   VAR_8 = FUNC_0(VAR_2, VAR_5.parts,
       VAR_5.nr_parts);
   FUNC_4(&VAR_5);
   return VAR_8 ? VAR_8 : VAR_5.nr_parts;
  }




  if (VAR_7 < 0 && !VAR_8)
   VAR_8 = VAR_7;
 }
 return VAR_8;
}
