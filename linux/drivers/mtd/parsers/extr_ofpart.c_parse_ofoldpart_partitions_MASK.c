
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {int offset; int size; char const* name; int mask_flags; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {int dummy; } ;
struct device_node {int dummy; } ;
typedef int part ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct mtd_partition* FUNC_1 (int,int,int ) ;
 struct device_node* FUNC_2 (struct mtd_info*) ;
 void* FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (char*,struct device_node*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_3,
          const struct mtd_partition **VAR_4,
          struct mtd_part_parser_data *VAR_5)
{
 struct mtd_partition *VAR_6;
 struct device_node *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 const struct {
  __be32 offset, len;
 } *VAR_11;
 const char *VAR_12;


 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return 0;

 VAR_11 = FUNC_3(VAR_7, "partitions", &VAR_9);
 if (!VAR_11)
  return 0;

 FUNC_4("Device tree uses obsolete partition map binding: %pOF\n", VAR_7);

 VAR_10 = VAR_9 / sizeof(VAR_11[0]);

 VAR_6 = FUNC_1(VAR_10, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_7, "partition-names", &VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_6[VAR_8].offset = FUNC_0(VAR_11->offset);
  VAR_6[VAR_8].size = FUNC_0(VAR_11->len) & ~1;

  if (FUNC_0(VAR_11->len) & 1)
   VAR_6[VAR_8].mask_flags = VAR_2;

  if (VAR_12 && (VAR_9 > 0)) {
   int VAR_13 = FUNC_5(VAR_12) + 1;

   VAR_6[VAR_8].name = VAR_12;
   VAR_9 -= VAR_13;
   VAR_12 += VAR_13;
  } else {
   VAR_6[VAR_8].name = "unnamed";
  }

  VAR_11++;
 }

 *VAR_4 = VAR_6;
 return VAR_10;
}
