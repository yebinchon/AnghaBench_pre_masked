
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct mtd_part {TYPE_2__* parent; scalar_t__ offset; } ;
struct TYPE_3__ {int corrected; int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;
struct mtd_ecc_stats {scalar_t__ corrected; scalar_t__ failed; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int (* _read ) (TYPE_2__*,scalar_t__,size_t,size_t*,int *) ;struct mtd_ecc_stats ecc_stats; } ;


 int FUNC_0 (int) ;
 struct mtd_part* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,size_t,size_t*,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
  size_t *VAR_3, u_char *VAR_4)
{
 struct mtd_part *VAR_5 = FUNC_1(VAR_0);
 struct mtd_ecc_stats VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->parent->ecc_stats;
 VAR_7 = VAR_5->parent->_read(VAR_5->parent, VAR_1 + VAR_5->offset, VAR_2,
      VAR_3, VAR_4);
 if (FUNC_3(FUNC_0(VAR_7)))
  VAR_0->ecc_stats.failed +=
   VAR_5->parent->ecc_stats.failed - VAR_6.failed;
 else
  VAR_0->ecc_stats.corrected +=
   VAR_5->parent->ecc_stats.corrected - VAR_6.corrected;
 return VAR_7;
}
