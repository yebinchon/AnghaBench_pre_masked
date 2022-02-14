
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {unsigned long long size; unsigned long long offset; unsigned int mask_flags; unsigned char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtd_partition* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mtd_partition*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int FUNC_2 (char*) ;
 struct mtd_partition* FUNC_3 (int,int ) ;
 unsigned long long FUNC_4 (char*,char**) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (unsigned char*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (unsigned char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

__attribute__((used)) static struct mtd_partition * FUNC_10(char *VAR_7,
          char **VAR_8,
          int *VAR_9,
          int VAR_10,
          unsigned char **VAR_11,
          int VAR_12)
{
 struct mtd_partition *VAR_13;
 unsigned long long VAR_14, VAR_15 = VAR_5;
 char *VAR_16;
 int VAR_17;
 unsigned char *VAR_18;
 char VAR_19;
 unsigned int VAR_20;


 if (*VAR_7 == '-') {

  VAR_14 = VAR_6;
  VAR_7++;
 } else {
  VAR_14 = FUNC_4(VAR_7, &VAR_7);
  if (!VAR_14) {
   FUNC_5("partition has size 0\n");
   return FUNC_0(-VAR_0);
  }
 }


 VAR_20 = 0;
 VAR_19 = 0;


 if (*VAR_7 == '@') {
  VAR_7++;
  VAR_15 = FUNC_4(VAR_7, &VAR_7);
 }


 if (*VAR_7 == '(')
  VAR_19 = ')';

 if (VAR_19) {
  char *VAR_21;

  VAR_16 = ++VAR_7;
  VAR_21 = FUNC_7(VAR_16, VAR_19);
  if (!VAR_21) {
   FUNC_5("no closing %c found in partition name\n", VAR_19);
   return FUNC_0(-VAR_0);
  }
  VAR_17 = VAR_21 - VAR_16;
  VAR_7 = VAR_21 + 1;
 } else {
  VAR_16 = ((void*)0);
  VAR_17 = 13;
 }


 VAR_12 += VAR_17 + 1;


 if (FUNC_9(VAR_7, "ro", 2) == 0) {
  VAR_20 |= VAR_4;
  VAR_7 += 2;
 }


 if (FUNC_9(VAR_7, "lk", 2) == 0) {
  VAR_20 |= VAR_3;
  VAR_7 += 2;
 }


 if (*VAR_7 == ',') {
  if (VAR_14 == VAR_6) {
   FUNC_5("no partitions allowed after a fill-up partition\n");
   return FUNC_0(-VAR_0);
  }

  VAR_13 = FUNC_10(VAR_7 + 1, &VAR_7, VAR_9, VAR_10 + 1,
    &VAR_18, VAR_12);
  if (FUNC_1(VAR_13))
   return VAR_13;
 } else {

  int VAR_22;

  *VAR_9 = VAR_10 + 1;
  VAR_22 = *VAR_9 * sizeof(struct mtd_partition) +
        VAR_12;

  VAR_13 = FUNC_3(VAR_22, VAR_2);
  if (!VAR_13)
   return FUNC_0(-VAR_1);
  VAR_18 = (unsigned char *)(VAR_13 + *VAR_9);
 }





 VAR_13[VAR_10].size = VAR_14;
 VAR_13[VAR_10].offset = VAR_15;
 VAR_13[VAR_10].mask_flags = VAR_20;
 if (VAR_16)
  FUNC_8(VAR_18, VAR_16, VAR_17 + 1);
 else
  FUNC_6(VAR_18, "Partition_%03d", VAR_10);
 VAR_13[VAR_10].name = VAR_18;
 VAR_18 += VAR_17 + 1;

 FUNC_2(("partition %d: name <%s>, offset %llx, size %llx, mask flags %x\n",
      VAR_10, VAR_13[VAR_10].name, VAR_13[VAR_10].offset,
      VAR_13[VAR_10].size, VAR_13[VAR_10].mask_flags));


 if (VAR_11)
  *VAR_11 = VAR_18;


 *VAR_8 = VAR_7;


 return VAR_13;
}
