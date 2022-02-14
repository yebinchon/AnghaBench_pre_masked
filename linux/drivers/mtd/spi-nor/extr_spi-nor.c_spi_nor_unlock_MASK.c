
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_1__* locking_ops; } ;
struct spi_nor {TYPE_2__ params; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;
struct TYPE_3__ {int (* unlock ) (struct spi_nor*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_nor* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct spi_nor*,int ) ;
 int FUNC_2 (struct spi_nor*,int ) ;
 int FUNC_3 (struct spi_nor*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_2, loff_t VAR_3, uint64_t VAR_4)
{
 struct spi_nor *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_5->params.locking_ops->unlock(VAR_5, VAR_3, VAR_4);

 FUNC_2(VAR_5, VAR_0);
 return VAR_6;
}
