
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_part {TYPE_2__* parent; scalar_t__ offset; } ;
struct mtd_oob_ops {int dummy; } ;
struct TYPE_3__ {int corrected; int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;
struct mtd_ecc_stats {scalar_t__ corrected; scalar_t__ failed; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int (* _read_oob ) (TYPE_2__*,scalar_t__,struct mtd_oob_ops*) ;struct mtd_ecc_stats ecc_stats; } ;


 int FUNC_0 (int) ;
 struct mtd_part* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,struct mtd_oob_ops*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1,
  struct mtd_oob_ops *VAR_2)
{
 struct mtd_part *VAR_3 = FUNC_1(VAR_0);
 struct mtd_ecc_stats VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->parent->ecc_stats;
 VAR_5 = VAR_3->parent->_read_oob(VAR_3->parent, VAR_1 + VAR_3->offset, VAR_2);
 if (FUNC_3(FUNC_0(VAR_5)))
  VAR_0->ecc_stats.failed +=
   VAR_3->parent->ecc_stats.failed - VAR_4.failed;
 else
  VAR_0->ecc_stats.corrected +=
   VAR_3->parent->ecc_stats.corrected - VAR_4.corrected;
 return VAR_5;
}
