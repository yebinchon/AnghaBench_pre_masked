
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {char const* name; long long size; long long offset; } ;
struct mtd_part {int list; int mtd; } ;
struct mtd_info {long long size; } ;
typedef int part ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mtd_part*) ;
 long long VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 int FUNC_1 (struct mtd_part*) ;
 int FUNC_2 (int *) ;
 struct mtd_part* FUNC_3 (struct mtd_info*,struct mtd_partition*,int,long long) ;
 int FUNC_4 (struct mtd_part*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mtd_partition*,int ,int) ;
 int FUNC_8 (struct mtd_part*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mtd_info *VAR_6, const char *VAR_7,
        long long VAR_8, long long VAR_9)
{
 struct mtd_partition VAR_10;
 struct mtd_part *VAR_11;
 int VAR_12 = 0;


 if (VAR_8 == VAR_1 ||
     VAR_8 == VAR_2)
  return -VAR_0;

 if (VAR_9 == VAR_3)
  VAR_9 = VAR_6->size - VAR_8;

 if (VAR_9 <= 0)
  return -VAR_0;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.name = VAR_7;
 VAR_10.size = VAR_9;
 VAR_10.offset = VAR_8;

 VAR_11 = FUNC_3(VAR_6, &VAR_10, -1, VAR_8);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_9(&VAR_5);
 FUNC_5(&VAR_11->list, &VAR_4);
 FUNC_10(&VAR_5);

 VAR_12 = FUNC_2(&VAR_11->mtd);
 if (VAR_12)
  goto err_remove_part;

 FUNC_8(VAR_11);

 return 0;

err_remove_part:
 FUNC_9(&VAR_5);
 FUNC_6(&VAR_11->list);
 FUNC_10(&VAR_5);

 FUNC_4(VAR_11);

 return VAR_12;
}
