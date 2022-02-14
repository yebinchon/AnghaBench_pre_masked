
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtd_ecc_stats {int corrected; } ;
typedef int oldstats ;
struct TYPE_5__ {int corrected; } ;
struct TYPE_4__ {size_t writesize; TYPE_3__ ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_ecc_stats*,TYPE_3__*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,size_t,size_t*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,long long) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(int VAR_5)
{
 int VAR_6 = 0;
 size_t VAR_7;
 struct mtd_ecc_stats VAR_8;

 if (VAR_5)
  FUNC_3("read_page\n");


 FUNC_0(&VAR_8, &VAR_2->ecc_stats, sizeof(VAR_8));

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_2->writesize, &VAR_7, VAR_4);
 if (!VAR_6 || VAR_6 == -VAR_1)
  VAR_6 = VAR_2->ecc_stats.corrected - VAR_8.corrected;

 if (VAR_6 < 0 || VAR_7 != VAR_2->writesize) {
  FUNC_2("error: read failed at %#llx\n", (long long)VAR_3);
  if (VAR_6 >= 0)
   VAR_6 = -VAR_0;
 }

 return VAR_6;
}
