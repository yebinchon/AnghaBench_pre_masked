
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct attribute {int dummy; } ;
struct TYPE_14__ {struct attribute attr; } ;
struct TYPE_13__ {struct attribute attr; } ;
struct TYPE_12__ {struct attribute attr; } ;
struct TYPE_11__ {struct attribute attr; } ;
struct TYPE_8__ {struct attribute attr; } ;
struct TYPE_10__ {TYPE_1__ attr; } ;
struct TYPE_9__ {struct attribute** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 () ;
 struct attribute** FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct attribute**) ;
 TYPE_3__* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;

int FUNC_3(void)
{
 struct attribute **VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_1((VAR_8 + 5), sizeof(struct attribute *),
   VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_0();
 if (VAR_10) {
  FUNC_2(VAR_9);
  return VAR_10;
 }
 *VAR_9 = &VAR_4.attr;
 *(VAR_9 + 1) = &VAR_3.attr;
 *(VAR_9 + 2) = &VAR_2.attr;
 *(VAR_9 + 3) = &VAR_5.attr;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  *(VAR_9 + VAR_11 + 4) = &((VAR_6 + VAR_11)->attr.attr);
 VAR_7.attrs = VAR_9;
 return 0;
}
