
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mtd_part {scalar_t__ offset; TYPE_1__* parent; } ;
struct mtd_info {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* _write ) (TYPE_1__*,scalar_t__,size_t,size_t*,int const*) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,size_t,size_t*,int const*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
  size_t *VAR_3, const u_char *VAR_4)
{
 struct mtd_part *VAR_5 = FUNC_0(VAR_0);
 return VAR_5->parent->_write(VAR_5->parent, VAR_1 + VAR_5->offset, VAR_2,
        VAR_3, VAR_4);
}
