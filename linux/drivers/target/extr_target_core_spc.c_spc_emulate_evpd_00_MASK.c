
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_cmd {TYPE_1__* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_5__ {unsigned char page; } ;
struct TYPE_4__ {int dev_flags; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;






 if (VAR_2->se_dev->dev_flags & VAR_0) {
  VAR_3[3] = FUNC_0(VAR_1);
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4)
   VAR_3[VAR_4 + 4] = VAR_1[VAR_4].page;
 }

 return 0;
}
