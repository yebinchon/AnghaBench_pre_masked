
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef enum btrfs_feature_set { ____Placeholder_btrfs_feature_set } btrfs_feature_set ;
struct TYPE_5__ {char* name; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;
struct TYPE_7__ {TYPE_2__ kobj_attr; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 char* FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,char*,char const*) ;

char *FUNC_3(enum btrfs_feature_set VAR_2, u64 VAR_3)
{
 size_t VAR_4 = 4096;
 int VAR_5 = 0;
 int VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1[VAR_2]); VAR_6++) {
  const char *VAR_8;

  if (!(VAR_3 & (1ULL << VAR_6)))
   continue;

  VAR_8 = VAR_1[VAR_2][VAR_6].kobj_attr.attr.name;
  VAR_5 += FUNC_2(VAR_7 + VAR_5, VAR_4 - VAR_5, "%s%s",
    VAR_5 ? "," : "", VAR_8);
 }

 return VAR_7;
}
