
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
struct rio_dev {int pef; } ;
struct kobject {int dummy; } ;
struct attribute {scalar_t__ mode; } ;
struct TYPE_6__ {struct attribute attr; } ;
struct TYPE_5__ {struct attribute attr; } ;
struct TYPE_4__ {struct attribute attr; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct kobject*) ;
 struct rio_dev* FUNC_1 (int ) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_4,
           struct attribute *VAR_5, int VAR_6)
{
 struct rio_dev *VAR_7 = FUNC_1(FUNC_0(VAR_4));
 umode_t VAR_8 = VAR_5->mode;

 if (!(VAR_7->pef & VAR_0) &&
     (VAR_5 == &VAR_3.attr ||
      VAR_5 == &VAR_2.attr ||
      VAR_5 == &VAR_1.attr)) {



  VAR_8 = 0;
 }

 return VAR_8;
}
